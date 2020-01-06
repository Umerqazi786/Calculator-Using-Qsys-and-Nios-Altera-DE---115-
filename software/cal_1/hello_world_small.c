#include <stdio.h>
#include <iostream>
#include "system.h"
#include "altera_avalon_pio_regs.h"
void delay(int a){
	volatile int i = 0;
	while(i<a*10000){
		i++;
	}
}
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[8];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
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
		  x ^= inp1 + inp2;
	  	  out1 = decToBinary(x);
	  }
	  if (inp4 == 1){
		  x ^= inp1 - inp2;
		  out1 = decToBinary(x);
	  }
	  if (inp5 == 1){
	  		  x ^= inp1 * inp2;
	  	  	  out1 = decToBinary(x);
	  }
	  if (inp6 == 1){
	  		  x ^= inp1 / inp2;
	  		  out1 = decToBinary(x);
	  }
		delay(20);

  }

  return 0;
}



