/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   opdracht voor school
 * @version 1.0
 * @date    1-12-2024
 */

#include <stdio.h>

void crypt(char *des, char *src){
  int i = 0;
  while (src[i] != '\0'){

    des[i] = 127 - src[i];

    if (isprint(des[i])== 0){ //hier wordt getest of des[i] geprint kan worden  
      des[i] = '.';
    }

    i++; 
  }
  des[i] = '\0';
}

int main(int argc, char *argv[]) {
  
  char srcArray[] = {"hallo wereld!"};
  char desArray[sizeof(srcArray)];

  crypt(desArray,srcArray);
  
  printf("Bron: %s\n", srcArray);     // Print de originele string
  printf("Getransformeerd: %s\n", desArray); // Print de getransformeerde string

} 