#include <16f887.h>                   //Nuestro pic
#use delay (clock=8000000)            //Fosc=8Mhz
#include <lcd.c>                      //Libreria de la lcd
 
 
void main()
{
   //setup_oscillator(OSC_8MHZ|OSC_INTRC);  //Programamos oscilador interno del Pic a 8MHZ
   //set_tris_b(0);                         //Puerto B como salida
   lcd_init();                            //Inicializamos LCD
   lcd_putc("Hola Mundo");                //"Hola Mundo"
//!   while(1)
//!   {
//!      delay_ms(10);                       //Esperamos a lo sonso 10 ms
//!      output_toggle(PIN_B5);              //Parpadeamos Led, output_toggle cambia el estado logico del pin pasado de parametro
//!      delay_ms(250);                     //Esperamos a lo sonso 250 ms
//!   }
}
