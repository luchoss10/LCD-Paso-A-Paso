// LCD module connections
sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;
// End LCD module connections

char txt1[] = "Practica";
char txt2[] = "PIC16F887";
char txt3[] = "Hola";
char txt4[] = "Mundo";

char i;

void Move_Delay() {
  Delay_ms(500);
}

void main(){
  ANSEL  = 0;
  ANSELH = 0;
  C1ON_bit = 0;
  C2ON_bit = 0;

  Lcd_Init();

  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Cmd(_LCD_CURSOR_OFF);
  Lcd_Out(1,6,txt3);

  Lcd_Out(2,6,txt4);
  Delay_ms(2000);
  Lcd_Cmd(_LCD_CLEAR);

  Lcd_Out(1,1,txt1);
  Lcd_Out(2,5,txt2);

  Delay_ms(2000);

  // Moving text
  for(i=0; i<4; i++) {
    Lcd_Cmd(_LCD_SHIFT_RIGHT);
    Move_Delay();
  }

  while(1) {
    for(i=0; i<8; i++) {
      Lcd_Cmd(_LCD_SHIFT_LEFT);
      Move_Delay();
    }

    for(i=0; i<8; i++) {
      Lcd_Cmd(_LCD_SHIFT_RIGHT);
      Move_Delay();
    }
  }
}