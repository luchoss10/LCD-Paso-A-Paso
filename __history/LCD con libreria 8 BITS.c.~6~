#include <16f887.h>                   
#use delay (clock=8000000)            

//Establecemos el modo de 8 bits de la LCD y escogemos el puerto que utilizaremos
#define LCD_DATA_PORT getenv("SFR:PORTB")
//Establecemos los pines de E RS y RW.
#define LCD_ENABLE_PIN    PIN_D0 
#define LCD_RS_PIN               PIN_D1
#define LCD_RW_PIN             PIN_D2
//Incluimos la libreria de la LCD
#INCLUDE <lcd.c>

void main()
{
   //Configuramos los puertos que usaremos como salidas
   set_tris_B(0);
   SET_TRIS_D(0);
   
   lcd_init();    //Inicializamos LCD
   
   lcd_putc("Hola Mundo UTP");    //"Hola Mundo"
}
