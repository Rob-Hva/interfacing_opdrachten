/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   Dit is een opdracht voor school waarbij ik een 2D array moet gebruiken
 *          om de tafels van 3, 5. 7 en 9 mee uit te printen.
 * @version 1.0
 * @date    18-2-2025
 */

#include <stdio.h>
//Hier wordt gekozen hoeveel tafels er komen en hoe lang deze moeten zijn.
#define aantalTafels 4
#define tafelLengte 10

int main(void) {

  //Hier worden de tafels gekozen.
  int tafels[aantalTafels] = {3,5,7,9};

  //Hier wordt een array aangemaakt voor de antwoorden van alle tafels
  int antwoorden[aantalTafels][tafelLengte];

  //Hier worden de waardes van de tafels berekent.
  for (int rij = 0; rij < aantalTafels; rij++){
    for (int kollom =1; kollom <= tafelLengte; kollom++){
      antwoorden[rij][kollom-1] = kollom * tafels[rij];
    }
  }

  //Hier worden de waardes van de tafels geprint.
  for (int rij = 0; rij < aantalTafels; rij++){
    for (int kollom =1; kollom <= tafelLengte; kollom++){
      printf("%d * %d = %d\n", kollom, tafels[rij], antwoorden[rij][kollom-1]);
    }
    printf("\n");
  }
}