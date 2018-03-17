
#include <16F887.h>
#FUSES NOWDT, NOPUT, INTRC_IO, NOPROTECT, NOBROWNOUT, NOWRT
//#use fuses iNTRC_IO
#use delay(internal=8M)

#use fast_io(d)
#use fast_io(C)

//Funcion pulso al pin E de la LCD
void pulso(){
   output_high(pin_D1);
   delay_ms(100);   
   
   output_low(pin_D1);
   delay_ms(100);
}

//funcion pulso con escritura incluido
void escribe(){
   output_d(0x03);
   delay_ms(50);   
   
   output_d(0x01);
   delay_ms(50);   
}
  
void main(){
   setup_oscillator(OSC_8MHZ|OSC_INTRC);
   //Establecemos puertos como salidas
   set_tris_c(0x00);
   set_tris_d(0x00);
   //Limpiamos los puertos
   output_c(0x00);
   output_d(0x00);
   //--------------------------------------------------------------------------
   //Incializamos la LCD Modo 4 bits
   output_c(0x20);
   delay_ms(100);
   
   pulso();
   //--------------------------------------------------------------------------

   output_c(0x00);
   delay_ms(100);
   
   pulso();
   //--------------------------------------------------------------------------
   output_c(0xF0);
   delay_ms(100);
   
   pulso();
   //--------------------------------------------------------------------------
   //Terrmina inicialización
   //Escribe U
   //output_c(0X05);
   output_c(0X50);
   delay_ms(100);
   
   escribe();
   
   //output_c(0X05);
   output_c(0X50);
   delay_ms(100);
   
   escribe();
   //--------------------------------------------------------------------------
   //Escribe T
   //output_c(0X05);
   output_c(0X50);
   delay_ms(100);
   
   escribe();
   
   //output_c(0X04);
   output_c(0X40);
   delay_ms(100);
   
   escribe();
   
   //--------------------------------------------------------------------------
   //Escribe P
   //output_c(0X05);
   output_c(0X50);
   delay_ms(100);
   
   escribe();
   
   output_c(0X00);
   delay_ms(100);
   
   escribe();
//!   //-----------------------------------------------------------------------
   
}
