#include <stdio.h>
#include <math.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"
void delay(int a){
	volatile int i = 0;
	while(i<a*10000){
		i++;
	}
}


int main()
{ 
  unsigned int inp1, inp2, inp3, inp4, inp5, inp6;
  unsigned int out1 = 0;
  unsigned int x;
  while (1){
	  IOWR_ALTERA_AVALON_PIO_DATA(OUTPUT_ALL_BASE, out1);
	  inp1 = IORD_ALTERA_AVALON_PIO_DATA(INPUT_1_BASE);
	  inp2 = IORD_ALTERA_AVALON_PIO_DATA(INPUT_2_BASE);
	  inp3 = IORD_ALTERA_AVALON_PIO_DATA(INPUT_3_BASE);
	  inp4 = IORD_ALTERA_AVALON_PIO_DATA(INPUT_4_BASE);
	  inp5 = IORD_ALTERA_AVALON_PIO_DATA(INPUT_5_BASE);
	  inp6 = IORD_ALTERA_AVALON_PIO_DATA(INPUT_6_BASE);
	  if (inp3 == 1){
		  out1 = inp1 + inp2;

	  }
	  if (inp4 == 1){
		  if(inp2 > inp1){
			  out1 = inp1 - inp2;
			  out1 = (~out1) + 1;
		  }
		  else
		  out1 = inp1 - inp2;

	  }
	  if (inp5 == 1){
	  		  out1 = inp1 * inp2;

	  }
	  if (inp6 == 1){
	  		  out1 = inp1 / inp2;

	  }
		delay(500);

  }

  return 0;
}



