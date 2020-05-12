#INCLUDE <18F4550.H>
#FUSES XT
#FUSES NOWDT
#USE DELAY (CLOCK = 4000000)
#USE STANDARD_IO(A)

int tiempo = 300;

void main(){
   while(true){
      output_a(0b0000000);
      delay_ms(tiempo);
      output_a(0b0000001);
      delay_ms(tiempo);
   }
}
