/**
 * @file    makeLastCapital.c
 * @author  Rob Beaufort
 * @brief   Dit is een functie die een hoofdletter maakt van de laatste letter in een string.
 * @version 1.0
 * @date    16-5-2023
 */
#include <stdio.h>
#include <string.h>

void makeLastCapital(char *Array){
  //Eerst wordt er naar het einde van de string gezocht.
  while (*Array != '\0'){
    Array++;
  } 
  //Zodra deze gevonden is gaat de pointer 1 stap terug en maakt een hoofdletter van dat charachter.
  if (*Array =='\0'){
    Array--;
    *Array = toupper(*Array);
  }
}