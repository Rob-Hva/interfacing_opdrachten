/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   Dit is een opdracht voor school waarin een vooraf bepaalde string wordt vergeleken met een input.
 * @version 1.0
 * @date    18-2-2025
 */

#include <stdio.h>

int main(int argc, char *argv[]){

  //Hier wordt er gecontroleerd of er een argument is meegegeven.
  if(argc < 2){
    printf("geef een argument!");
    return 0;
  }

  int hetzelfde = 1;
  char string[] = "hallo";
  char *userInput = argv[1]; //Hier wordt userInput ingesteld op de input.

  //In dit stuk wordt gekenen of alle letters overeenkomen.
  for(int i = 0; userInput[i] != '\0'; i++){
    if (string[i] != userInput[i]){ 
      hetzelfde = 0;
    }
  }

  //Hier wordt afgedrukt of het overeen komt.
  if (hetzelfde == 1){ 
    printf("%s en %s zijn hetzelfde!", string, userInput);
  } else {
    printf("%s en %s zijn niet hetzelfde!", string, userInput);
  }
}