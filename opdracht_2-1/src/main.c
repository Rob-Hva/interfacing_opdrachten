/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   opdracht voor school
 * @version 1.0
 * @date    19-11-2024
 */

#include <stdio.h>

int main(void) {
  int aantal_getallen = 20;
  int array[aantal_getallen-1]; //hier wordt een array aangemaakt

  for (int n =0; n < aantal_getallen; n++){
    array[n] = 2 + (3 * n);
    printf("%d\n",array[n]); //hier wordt een array geprint
  }
  
} 