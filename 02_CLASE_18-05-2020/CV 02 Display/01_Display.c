#INCLUDE <18F4550.H>
#FUSES XT
#FUSES NOWDT
#USE DELAY (CLOCK= 4000000)

#USE STANDARD_IO(D)
int tiempo=500;

void main()
{
   while(true)
   {
      output_d(0b01111001); //E
      delay_ms(tiempo);
      output_d(0b01110111); //R
      delay_ms(tiempo);     
      output_d(0b00110000); //I
      delay_ms(tiempo);     
      output_d(0b00111001); //C
      delay_ms(tiempo);             
   }
}
