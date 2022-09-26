
_main:

;SevenSegCathodeButton.c,6 :: 		void main(){
;SevenSegCathodeButton.c,7 :: 		int i = 0;
	CLRF       main_i_L0+0
	CLRF       main_i_L0+1
;SevenSegCathodeButton.c,8 :: 		trisb = 0x00;
	CLRF       TRISB+0
;SevenSegCathodeButton.c,9 :: 		portb = 0x00;
	CLRF       PORTB+0
;SevenSegCathodeButton.c,10 :: 		trisd = 0xFF;
	MOVLW      255
	MOVWF      TRISD+0
;SevenSegCathodeButton.c,11 :: 		while(1){
L_main0:
;SevenSegCathodeButton.c,12 :: 		if(portd.f0==1){
	BTFSS      PORTD+0, 0
	GOTO       L_main2
;SevenSegCathodeButton.c,13 :: 		delay_ms(200);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      8
	MOVWF      R12+0
	MOVLW      119
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
;SevenSegCathodeButton.c,14 :: 		if(i<9){
	MOVLW      128
	XORWF      main_i_L0+1, 0
	MOVWF      R0+0
	MOVLW      128
	SUBWF      R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main7
	MOVLW      9
	SUBWF      main_i_L0+0, 0
L__main7:
	BTFSC      STATUS+0, 0
	GOTO       L_main4
;SevenSegCathodeButton.c,15 :: 		i++;
	INCF       main_i_L0+0, 1
	BTFSC      STATUS+0, 2
	INCF       main_i_L0+1, 1
;SevenSegCathodeButton.c,17 :: 		}else i=0;
	GOTO       L_main5
L_main4:
	CLRF       main_i_L0+0
	CLRF       main_i_L0+1
L_main5:
;SevenSegCathodeButton.c,18 :: 		}
L_main2:
;SevenSegCathodeButton.c,25 :: 		portb=CC[i];
	MOVF       main_i_L0+0, 0
	ADDLW      _CC+0
	MOVWF      FSR
	MOVF       INDF+0, 0
	MOVWF      PORTB+0
;SevenSegCathodeButton.c,26 :: 		}
	GOTO       L_main0
;SevenSegCathodeButton.c,27 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
