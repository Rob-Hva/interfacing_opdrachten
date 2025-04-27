/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   Dit is een opdracht voor school waarbij je 2 strings als argument moet meegeven.
 *          Deze 2 strings worden vervolgens achter elkaar gezet.
 * @version 1.0
 * @date    18-2-2025
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  //Hier wordt er gecontroleerd of er een argument is meegegeven.
  if(argc < 2){
    printf("geef een argument!");
    return 0;
  } else if (argc < 3)
  {
    printf("geef 2 argumenten!");
    return 0;
  }
  

  //Hier worden alle variable gedeclareerd.
  char *voornaam = argv[1];
  char *achternaam = argv[2];

  //Hier worden de voornaam en achternaam achter elkaar gezet.
  int volledigeNaamLengte = strlen(voornaam) + strlen(achternaam)+1;
  char volledigeNaam[volledigeNaamLengte];

  int j =0;
  for (int i = 0; i < volledigeNaamLengte; i++){
    if (i < strlen(voornaam)){
      volledigeNaam[i] = voornaam [i];
    } else if (i == strlen(voornaam)){
      volledigeNaam[strlen(voornaam)] = ' ';
    } else if (i > strlen(voornaam)){
      volledigeNaam[i] = achternaam[j];
      j++;
    }
  }
  
  //Hier worden alle variablen geprint. 
  printf("voornaam = %s\n", voornaam);
  printf("achternaam = %s\n", achternaam);
  printf("volledige naam = %s\n", volledigeNaam);
}