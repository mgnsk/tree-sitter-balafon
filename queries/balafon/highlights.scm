; commands that emit MIDI events
[
  "play"
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
  "time"
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
