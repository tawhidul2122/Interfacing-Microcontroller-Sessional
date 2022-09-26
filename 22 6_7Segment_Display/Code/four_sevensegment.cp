#line 1 "C:/Users/alenm/Desktop/4-2/Interfacing and Microcontroller Sessional/Lab/Code/6_7Segment_Display/Code/four_sevensegment.c"
int firstDigit = 0x48;
int secondDigit = 0x86;
int thirdDigit = 0xc7;
int fourthDigit = 0xc7;
int fifthDigit = 0xc0;
int sixthDigit = 0xc0;

void main() {
TRISB = 0x00;
TRISD = 0x00;
portb = 0x00;
portd = 0x00;

while(1)
 {
 portd.f0 = 1;
 portb = firstDigit;
 delay_ms(10);
 portd.f0 = 0;

 portd.f1 = 1;
 portb = secondDigit;
 delay_ms(10);
 portd.f1 = 0;

 portd.f2 = 1;
 portb = thirdDigit;
 delay_ms(10);
 portd.f2 = 0;

 portd.f3 = 1;
 portb = fourthDigit;
 delay_ms(10);
 portd.f3 = 0;

 portd.f5 = 1;
 portb = fifthDigit;
 delay_ms(10);
 portd.f5 = 0;

 portd.f7 = 1;
 portb = sixthDigit;
 delay_ms(10);
 portd.f7 = 0;
 }

}
