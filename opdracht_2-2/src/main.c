/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   opdracht voor school
 * @version 1.0
 * @date    19-11-2024
 */

#include <stdio.h>

int main(void) {

  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int arrayLengte = strlen(alphabet);
  printf("%d\n", arrayLengte);
  
  //Hier wordt een array geprint.
  for (int i =0; i < arrayLengte; i++){
  printf("%c\n",alphabet[i]);
  }
  
  //Hier wordt een array agterstevoren geprint.
  for (int i = arrayLengte-1; i >= 0; i--){
  printf("%c\n",alphabet[i]);
  }
  
} 