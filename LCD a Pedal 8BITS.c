#include <16F887.h>
#use delay (crystal=8000000)

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
   delay_ms(100);   
   
   output_d(0x01);
   delay_ms(100);   
}
  
void main(){
   //Establecemos puertos como salidas
   set_tris_b(0x00);
   set_tris_d(0x00);
   //Limpiamos los puertos
   output_b(0x00);
   output_d(0x00);
   //--------------------------------------------------------------------------
   //Incializamos la LCD Modo 8 bits
   output_b(0x3A);
   delay_ms(100);
   
   pulso();
   //--------------------------------------------------------------------------

   output_b(0x0F);
   delay_ms(100);
   
   pulso();
   //--------------------------------------------------------------------------
   //Terrmina inicialización
   //Escribe U
   
   output_b(0X55);
   
   escribe(); 
   //--------------------------------------------------------------------------
   //Escribe T
   
   output_b(0X54);
   
   escribe();
   //--------------------------------------------------------------------------
   //Escribe P
   //output_c(0X05);
   output_b(0X50);
   
   escribe();
   //--------------------------------------------------------------------------
}
