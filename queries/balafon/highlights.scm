; commands that emit MIDI events
[
  "play"
  "tempo"
  "program"
  "control"
  "start"
  "stop"
] @keyword

; commands that don't emit MIDI events
[
  "bar"
  "end"
  "assign"
  "timesig"
  "velocity"
  "channel"
] @constant.builtin

[
  "["
  "]"
] @paren

(comment) @comment @spell

(char) @character

(uint) @number

(ident) @variable

(property) @operator
