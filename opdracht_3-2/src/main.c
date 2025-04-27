/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   Dit is een opdracht voor school waarbij het doel is om de eerste positie van 
 *          de laatste letter e in het argument te vinden.
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

  //Hier gaat de positie van de letter e in worden opgeslagen.
  int positie = -1;

  //Hier wordt er een pointer aangemaakt die naar het eerste woord wijst dat is megegeven in het argument.
  char *letter = argv[1];

  //Hier wordt het argument doorgelopen totdat het argument geëindigd is.
  //Als er een e is dan wordt deze opgeslagen in positie.
  for (int j = 0; letter[j] != '\0'; j++){
    if (letter[j] == 'e'){
      positie = j;
    } 
  }
  printf("positie e: %d\n", positie); //hier wordt het resultaat uitgeprint.
}