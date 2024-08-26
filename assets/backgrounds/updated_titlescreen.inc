; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: updated_titlescreen.png
; Pixel Width: 160px
; Pixel Height: 144px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

updated_titlescreen_tile_map_size EQU $0168
updated_titlescreen_tile_map_width EQU $14
updated_titlescreen_tile_map_height EQU $12

updated_titlescreen_tile_data_size EQU $02E0
updated_titlescreen_tile_count EQU $2E

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

updated_titlescreen_map_data:
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $01,$02,$03,$04,$05,$06,$07,$08,$09,$0A,$0B,$0C,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$0D,$0E,$0F,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$10,$11,$12,$13,$14,$15,$16,$17
DB $18,$19,$1A,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$1B,$00,$1C,$1B,$1D,$1E,$1F,$1C,$20,$21,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$22
DB $23,$24,$25,$26,$27,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$28,$29,$2A,$2B,$2C,$2D,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

updated_titlescreen_tile_data:
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$0F,$0F,$8F,$8F,$AF,$AF,$07,$07,$27,$27,$23,$23,$FF,$FF
DB $F0,$F0,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$F0,$F0,$FF,$FF
DB $FF,$FF,$FF,$FF,$E3,$E3,$C9,$C9,$E1,$E1,$C9,$C9,$00,$00,$FF,$FF
DB $FF,$FF,$F8,$F8,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$F8,$F8,$FF,$FF
DB $FF,$FF,$3F,$3F,$98,$98,$92,$92,$30,$30,$93,$93,$48,$48,$FF,$FF
DB $FF,$FF,$FF,$FF,$E3,$E3,$49,$49,$4F,$4F,$C9,$C9,$63,$63,$FF,$FF
DB $FF,$FF,$FF,$FF,$8C,$8C,$26,$26,$06,$06,$3E,$3E,$84,$84,$FF,$FF
DB $FF,$FF,$FF,$FF,$88,$88,$22,$22,$73,$73,$72,$72,$38,$38,$FF,$FF
DB $FF,$FF,$FF,$FF,$E3,$E3,$49,$49,$E1,$E1,$49,$49,$C0,$C0,$FF,$FF
DB $FF,$FF,$FF,$FF,$FE,$FE,$FC,$FC,$FC,$FC,$FC,$FC,$FE,$FE,$FF,$FF
DB $1F,$1F,$9F,$9F,$18,$18,$92,$92,$90,$90,$93,$93,$08,$08,$FF,$FF
DB $C3,$C3,$F3,$F3,$F3,$F3,$73,$73,$73,$73,$F3,$F3,$40,$40,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FC,$FC
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$7F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$9F,$9F
DB $07,$07,$94,$94,$9E,$9E,$9E,$9E,$9E,$9E,$0C,$0C,$FF,$FF,$FF,$FF
DB $FF,$FF,$88,$88,$22,$22,$70,$70,$73,$73,$38,$38,$FF,$FF,$FF,$FF
DB $FF,$FF,$E1,$E1,$47,$47,$61,$61,$F8,$F8,$41,$41,$FF,$FF,$FF,$FF
DB $FF,$FF,$8C,$8C,$26,$26,$26,$26,$26,$26,$8C,$8C,$FF,$FF,$FF,$FF
DB $FF,$FF,$8F,$8F,$2F,$2F,$7F,$7F,$7F,$7F,$3F,$3F,$FF,$FF,$FF,$FF
DB $83,$83,$C9,$C9,$C9,$C9,$C3,$C3,$CF,$CF,$87,$87,$FF,$FF,$FF,$FF
DB $FF,$FF,$8C,$8C,$26,$26,$06,$06,$3E,$3E,$84,$84,$FF,$FF,$FF,$FF
DB $FE,$FE,$88,$88,$22,$22,$72,$72,$72,$72,$38,$38,$FF,$FF,$FF,$FF
DB $7F,$7F,$09,$09,$49,$49,$49,$49,$49,$49,$60,$60,$FF,$FF,$FF,$FF
DB $9E,$9E,$06,$06,$9E,$9E,$9E,$9E,$93,$93,$C6,$C6,$FF,$FF,$FF,$FF
DB $7F,$7F,$7F,$7F,$7F,$7F,$7F,$7F,$FF,$FF,$7F,$7F,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F0,$F0
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$01,$01
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$C3,$C3
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$C0,$C0
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$1C,$1C
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$CF,$CF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FB,$FB
DB $FF,$FF,$FF,$F8,$FF,$FB,$FF,$FB,$FF,$F8,$FF,$FB,$FF,$FB,$FF,$FF
DB $FF,$FF,$FF,$38,$FF,$DB,$FF,$DB,$FF,$38,$FF,$FB,$FF,$FB,$FF,$FF
DB $FF,$FF,$FF,$38,$FF,$DB,$FF,$D8,$FF,$3B,$FF,$DB,$FF,$D8,$FF,$FF
DB $FF,$FF,$FF,$1C,$FF,$FB,$FF,$3C,$FF,$FF,$FF,$FB,$FF,$1C,$FF,$FF
DB $FF,$FF,$FF,$1C,$FF,$FB,$FF,$3C,$FF,$DF,$FF,$DB,$FF,$3C,$FF,$FF
DB $FF,$FF,$FF,$1F,$FF,$FF,$FF,$3F,$FF,$DF,$FF,$DF,$FF,$3F,$FF,$FF
DB $FF,$FF,$FF,$FC,$FF,$FB,$FF,$FC,$FF,$FF,$FF,$FB,$FF,$FC,$FF,$FF
DB $FF,$FF,$FF,$18,$FF,$FE,$FF,$3E,$FF,$DE,$FF,$DE,$FF,$3E,$FF,$FF
DB $FF,$FF,$FF,$3C,$FF,$FB,$FF,$FB,$FF,$F8,$FF,$FB,$FF,$FB,$FF,$FF
DB $FF,$FF,$FF,$38,$FF,$DB,$FF,$DB,$FF,$18,$FF,$DB,$FF,$DB,$FF,$FF
DB $FF,$FF,$FF,$38,$FF,$DE,$FF,$DE,$FF,$3E,$FF,$DE,$FF,$DE,$FF,$FF
DB $FF,$FF,$FF,$3F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
