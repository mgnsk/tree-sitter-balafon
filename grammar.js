const terminator = choice(";", "\n"),
  uint = /\d+/,
  char = /[a-zA-Z]/,
  rest = "-",
  prefix = ":",
  cmdBar = seq(prefix, "bar"),
  cmdEnd = seq(prefix, "end"),
  cmdPlay = seq(prefix, "play"),
  cmdAssign = seq(prefix, "assign"),
  cmdTempo = seq(prefix, "tempo"),
  cmdTimesig = seq(prefix, "timesig"),
  cmdVelocity = seq(prefix, "velocity"),
  cmdChannel = seq(prefix, "channel"),
  cmdProgram = seq(prefix, "program"),
  cmdControl = seq(prefix, "control"),
  cmdStart = seq(prefix, "start"),
  cmdStop = seq(prefix, "stop"),
  bracketBegin = "[",
  bracketEnd = "]",
  propSharp = "#",
  propFlat = "$",
  propStaccato = "`",
  propAccent = ">",
  propMarcato = "^",
  propGhost = ")",
  propDot = ".",
  propTuplet = choice("/3", "/5"),
  propLetRing = "*",
  lineComment = seq("//", /.*/),
  // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
  blockComment = seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/");

module.exports = grammar({
  name: "balafon",

  extras: ($) => [$.comment, " ", "\t"],

  inline: ($) => [$.decl, $.note_object, $.symbol],

  rules: {
    source_file: ($) => seq(repeat(terminator), $.decl_list),

    decl_list: ($) => prec.left(repeat1(seq($.decl, repeat1(terminator)))),

    decl: ($) => choice($.bar, $.command, $.note_list),

    char: () => char,
    uint: () => uint,
    rest: () => rest,

    ident: () => token(repeat1(choice(char, uint))),

    bar: ($) =>
      seq(
        cmdBar,
        field("name", $.ident),
        repeat(terminator),
        field("body", $.decl_list),
        cmdEnd,
      ),

    note_list: ($) => repeat1($.note_object),

    note_object: ($) =>
      choice(
        seq($.symbol, repeat($.property)),
        seq(bracketBegin, $.note_list, bracketEnd, repeat($.property)),
      ),

    symbol: ($) => choice($.char, $.rest),

    property: () =>
      choice(
        propSharp,
        propFlat,
        propStaccato,
        propAccent,
        propMarcato,
        propGhost,
        uint,
        propDot,
        propTuplet,
        propLetRing,
      ),

    command: ($) =>
      choice(
        seq(cmdAssign, field("note", $.char), field("key", $.uint)),
        seq(cmdPlay, field("bar_name", $.ident)),
        seq(cmdTempo, field("bpm", $.uint)),
        seq(cmdTimesig, field("num", $.uint), field("denom", $.uint)),
        seq(cmdVelocity, field("velocity", $.uint)),
        seq(cmdChannel, field("channel", $.uint)),
        seq(cmdProgram, field("program", $.uint)),
        seq(cmdControl, field("control", $.uint), field("parameter", $.uint)),
        cmdStart,
        cmdStop,
      ),

    comment: () => token(choice(lineComment, blockComment)),
  },
});
