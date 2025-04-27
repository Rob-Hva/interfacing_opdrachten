/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   Dit is een opdracht voor school waarbij het doel is om de alle posities van 
 *          de letter e in het argument te vinden.
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

  //Hier wordt er een pointer aangemaakt die naar het eerste woord wijst dat is megegeven in het argument.
  char *letter = argv[1];

  //Hier wordt het aantal e's berekent.
  int aantalE = 0;
  for (int i = 0; letter[i] != '\0'; i++){
    if (letter[i] == 'e'){
      aantalE++;
    } 
  }  

  //Hier gaan de posities van de letters e in worden opgeslagen.
  int posities[aantalE-1];

  //Hier wordt het argument doorgelopen totdat het argument geëindigd is.
  //Als er een e is dan wordt deze opgeslagen in positie.
  int nummerE = 0;
  for (int i = 0; letter[i] != '\0'; i++){
    if (letter[i] == 'e'){
      posities[nummerE] = i;
      nummerE++;
    } 
  }
  
  //hier wordt het resultaat uitgeprint.
  for (int i = 0;i < aantalE; i++){
  printf("positie[%d] e = %d\n", i, posities[i]); 
  }
  printf("aantal e's = %d\n", aantalE);
}