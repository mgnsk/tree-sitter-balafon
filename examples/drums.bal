:tempo 132
:timesig 4 4
:velocity 100

// Percussion channel.
:channel 10

// Kick drum.
:assign k 36
// Acoustic snare drum.
:assign s 38
// Hi-Hat closed.
:assign x 42

// TODO: create formatter tool that formats all as the widest
// Align so that hits are on the same col and there is 1 space between notes
// of not, increase all note space 2x and try again
:bar 1
	[x       x       x       x       x       x       x       x       ]8
	[-8.         s16 -8      s8      -8.         s16 -8      s8      ]
	[k               k               k               k               ]
:end
