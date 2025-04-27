/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   Dit is een opdracht voor school waarin het aantal klinkers van de megegeven argumenten geteld worden.
 * @version 1.0
 * @date    18-2-2025
 */

#include <stdio.h>

int countVowels(char srcArray[], char vowelArray[]){
  int vowelcount = 0;
  for (int i = 0; srcArray[i] != '\0'; i++){
    for (int j = 0; vowelArray[j] != '\0'; j++){
      if (srcArray[i] == vowelArray[j]){
        vowelcount++;
      }
    }
  }
  return vowelcount;
}

int main(int argc, char *argv[]) {

  //Hier wordt de variable aangemaakt die het aantal vowels gaat bijhouden.
  int amountOfVowels = 0;
  //Dit is een array met alle vowels.
  char vowelArray[] = "aAeEiIoOuU";

  //Hier worden het aantal vowels geteld.
  for (int i =1; i < argc; i++){
    amountOfVowels += countVowels(argv[i], vowelArray);
  }
  printf("amount of vowels = %d\n amount of arg = %d", amountOfVowels, argc);
  
} 