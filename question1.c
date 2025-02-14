/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdint.h>

uint8_t average(uint8_t a, uint8_t b) {
 
  uint16_t sum = (uint16_t)a + (uint16_t)b;

 
  return (uint8_t)(sum >> 1);
}



uint8_t average_concise(uint8_t a, uint8_t b) {
  return (a + b) >> 1; 
}

uint8_t average_no_overflow(uint8_t a, uint8_t b) {
  return (a & b) + ((a ^ b) >> 1);
}


// Example usage:
#include <stdio.h>

int main() {
  uint8_t x = 255;
  uint8_t y = 255;
  uint8_t avg = average(x, y);
  printf("Average of %d and %d is %d\n", x, y, avg); // Output: 255 (correct)

  x = 10;
  y = 20;
  avg = average(x, y);
  printf("Average of %d and %d is %d\n", x, y, avg); // Output: 15 (correct)

    x = 254;
    y = 2;
    avg = average(x, y);
    printf("Average of %d and %d is %d\n", x, y, avg); // Output: 128 (correct)


  return 0;
}