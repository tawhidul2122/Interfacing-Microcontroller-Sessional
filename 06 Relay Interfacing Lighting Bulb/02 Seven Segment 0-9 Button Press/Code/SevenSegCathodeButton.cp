#line 1 "C:/Users/Towhidul Islam/Desktop/Interfacing-and-Microcontroller-main/Interfacing-and-Microcontroller-main/02 Seven Segment 0-9 Button Press/Code/SevenSegCathodeButton.c"
char CA[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90} ;
char CC[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F} ;



void main(){
 int i = 0;
 trisb = 0x00;
 portb = 0x00;
 trisd = 0xFF;
 while(1){
 if(portd.f0==1){
 delay_ms(200);
 if(i<9){
 i++;

 }else i=0;
 }






 portb=CC[i];
}
}
