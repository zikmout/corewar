.name "jump_chp"
.comment "we are the champignon my friend"

first:		sti r1, %100, %1
            sti r1, %:ok
            sti r1, %:wok
            sti r1, %:wok2
            ld 40, r2

wok:    live %54568
	st		r2, -24
	st		r2, -33
	st		r2, -42
	st		r2, -51
	st		r2, -60
	st		r2, -69
	st		r2, -78
	st		r2, -87
	st		r2, -96
 	st		r2, -105
 	st		r2, -114
 	st		r2, -123
	st		r2, -132
	st		r2, -141
 	st		r2, -150
 	st		r2, -159
	st		r2, -168
	st		r2, -177
	st		r2, -186
	st		r2, -195
	st		r2, -204
	st		r2, -213
	st		r2, -222
	st		r2, -231
	st		r2, -240
	st		r2, -249
	st		r2, -258
	st		r2, -267
	st		r2, -276
	st		r2, -285
 	st		r2, -194
 	st		r2, -203
 	st		r2, -212
 	st		r2, -221
 	st		r2, -230
 	st		r2, -239
 	st		r2, -248
 	st		r2, -257
 	st		r2, -266
	st		r2, -275
	st		r2, -284
	st		r2, -293
	st		r2, -302
	st		r2, -311
	st		r2, -320
	st		r2, -329
	st		r2, -338
	st		r2, -347
	st		r2, -348
	st		r2, -357
	st		r2, -366
	st		r2, -375
	st		r2, -384
	st		r2, -393
	st		r2, -402
	st		r2, -411
	st		r2, -420
	st		r2, -429
	st		r2, -438
	st		r2, -447
	st		r2, -456
	st		r2, -465
	st		r2, -474
	st		r2, -483
	st		r2, -492
	st		r2, -501
	st		r2, -510
    zjmp    %:wok

wok2:    live %54568
	st		r2, 24
	st		r2, 33
	st		r2, 42
	st		r2, 51
	st		r2, 60
	st		r2, 69
	st		r2, 78
	st		r2, 87
	st		r2, 96
 	st		r2, 105
 	st		r2, 114
 	st		r2, 123
	st		r2, 132
	st		r2, 141
 	st		r2, 150
 	st		r2, 159
	st		r2, 168
	st		r2, 177
	st		r2, 186
	st		r2, 195
	st		r2, 204
	st		r2, 213
	st		r2, 222
	st		r2, 231
	st		r2, 240
	st		r2, 249
	st		r2, 258
	st		r2, 267
	st		r2, 276
	st		r2, 285
 	st		r2, 194
 	st		r2, 203
 	st		r2, 212
 	st		r2, 221
 	st		r2, 230
 	st		r2, 239
 	st		r2, 248
 	st		r2, 257
;	st		r2, 266
;	st		r2, 275
;	st		r2, 284
;	st		r2, 293
;	st		r2, 302
;	st		r2, 311
;	st		r2, 320
;	st		r2, 329
;	st		r2, 338
;	st		r2, 347
;	st		r2, 348
;	st		r2, 357
;	st		r2, 366
;	st		r2, 375
;	st		r2, 384
;	st		r2, 393
;	st		r2, 402
;	st		r2, 411
;	st		r2, 420
;	st		r2, 429
;	st		r2, 438
;	st		r2, 447
;	st		r2, 456
;	st		r2, 465
;	st		r2, 474
;	st		r2, 483
;	st		r2, 492
;	st		r2, 501
;	st		r2, 510
    zjmp    %:wok2


ok:         live %36346
            st  r1, 250
            zjmp %:first
fork1:
	live	%4
	fork	%:fork2
    fork    %:wok
    fork    %:wok2
	ld 		%0, r16

fork2:
	live	%4
    fork    %:wok
    fork    %:wok2
	zjmp	%:fork1


