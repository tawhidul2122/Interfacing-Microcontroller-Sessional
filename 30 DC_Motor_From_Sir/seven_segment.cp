#line 1 "C:/Users/DELL/Desktop/CSE Interfacing/seven_segment.c"
void main() {
 int status=0;
 TRISC = 0x00;
 PORTC = 0x00;

 TRISD = 0xff;
 while(1)
 {

 if(portd.f0==1)
 {
 delay_ms(200);
 if(portd.f0==1)
 {
 status=1;
 }
 }

 if(portd.f4==1)
 {
 delay_ms(200);
 if(portd.f4==1)
 {
 status=0;
 }
 }

 if(portd.f7==1)
 {
 delay_ms(200);
 if(portd.f7==1)
 {
 status=2;
 }
 }
 if(status==1)
 {
 portc.f0=1;
 portc.f1=0;
 }
 else if(status==2)
 {
 portc.f0=0;
 portc.f1=1;
 }
 else
 {
 portc.f0=0;
 portc.f1=0;
 }
 }
}
