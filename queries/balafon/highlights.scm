; commands that emit MIDI events
[
  "play"
  "time"
  "tempo"
  "key"
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
  "velocity"
  "channel"
  "voice"
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
