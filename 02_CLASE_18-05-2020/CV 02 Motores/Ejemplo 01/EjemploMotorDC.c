#INCLUDE <18F4550.H>
#FUSES XT
#FUSES NOWDT
#USE DELAY (CLOCK= 4000000)

#USE STANDARD_IO(C)
#USE STANDARD_IO(D)

void main()
{
   while(true)
   {
      if(input(PIN_D0) == 0){
         output_high(PIN_C0);
      }else{
         output_low(PIN_C0);
      }      
   }
}
