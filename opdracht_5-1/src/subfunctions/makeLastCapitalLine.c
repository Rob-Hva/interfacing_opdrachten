/**
 * @file    makeLastCapital.c
 * @author  Rob Beaufort
 * @brief   Dit is een functie die een hoofdletter maakt van de laatste letter in een regel.
 * @version 1.0
 * @date    16-5-2023
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void makeLastCapitalLine(char *Array){

  //Hier wordt er gekeken of de pointer zich aan het einde van de string of regel bevindt.
  while (*Array != '\n' && *Array != '\0'){
    Array++;
  }
  //Zodra het einde van de regel gevonden is gaat de pointer 1 stap terug en maakt een hoofdletter van dat charachter.
  if (*Array =='\n' || *Array == ' '){
    Array--;
    *Array = toupper(*Array);
  } else if (*Array == '\0'){
    return;
  }
}