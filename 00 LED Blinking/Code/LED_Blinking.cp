#line 1 "C:/Users/Towhidul Islam/Desktop/Interfacing-and-Microcontroller-main/Interfacing-and-Microcontroller-main/LED Blinking/Code/LED_Blinking.c"
void main() {
 TRISB = 0x00;
 PORTB = 0x00;

 while(1){
 portB.f2 = 1;
 delay_ms(100);
 portB.f2 = 0;
 delay_ms(100);
 }
}
