#include <16f887.h>                   
#FUSES NOWDT, NOPUT, INTRC_IO, NOPROTECT, NOBROWNOUT, NOWRT
#use delay (internal=8M)          

#INCLUDE <lcd.c> //Libreria LCD

void main()
{
   setup_oscillator(OSC_8MHZ|OSC_INTRC);
   set_tris_D(0);//Por defecto es el puerto D por lo tanto lo establecemos como salida
   lcd_init();                            //Inicializamos LCD
   lcd_putc("Hola Mundo UTP");                //"Hola Mundo"
}
