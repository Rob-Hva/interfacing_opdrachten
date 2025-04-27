/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   Dit is een opdracht voord school waarin alle seizoenen van het jaar worden afgedrukt.
 * @version 1.0
 * @date    19-11-2024
 */

#include <stdio.h>
#define aantalSeizoenen 4

int main(void){

  char seizoenen[] = {"lente;zomer;herfst;winter"};
  char *woord = strtok(seizoenen,";");

  for (int i = 0; i < aantalSeizoenen; i++){
    printf("%s\n",woord);
    woord = strtok(NULL,";");
  }
}