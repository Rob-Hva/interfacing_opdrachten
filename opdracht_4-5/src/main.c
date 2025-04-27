/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   Dit is een opdracht voor school die een hoofdletter maakt van de laatste letter in een string.
 * @version 1.0
 * @date    18-2-2025
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {

  //Hier wordt er gecontroleerd of er een argument is meegegeven.
  if(argc < 2){
    printf("geef een argument!");
    return 0;
  }

  //Hier wordt een string aangemaakt waar het aangepaster argument in kan komen te staan.
  char newString[strlen(argv[1])];
  //Deze string wordt eerst gelijk gemaakt aan het argument zodat deze later kan worden aangepast.
  strcpy(newString, argv[1]);

  //Hier is een pointer die naar newString wijst.
  char *pnewString = newString;

  //hier wordt de laatste letter een hoofdletter gemaakt
  makeLastCapital(pnewString);

  //Hier wordt het resultaat geprint.
  printf("new string = %s\nold string = %s", newString, argv[1]);
} 