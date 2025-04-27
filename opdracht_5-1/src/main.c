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
#define bufferGrootte 10

int main() {

  //Hier wordt het bestand geopend.
  FILE *fp;
  if ((fp = fopen("C:\\school\\PRMIC\\gcc-voorbeelden-hva\\opdracht_5-1\\src\\ma_yuan.txt","r")) == NULL){

    //Hier wordt een foutmelding gegeven als het bestand niet geopend kon worden.
    printf("Kon bestand niet openen.\n");
    return 1;
  } else {

    //Hier wordt de text uitgeprint en de laatste letter in een hoofdletter veranderd.
    char buffer[bufferGrootte];
    while (fgets(buffer, bufferGrootte, fp) != NULL){
      makeLastCapitalLine(buffer);
      printf("%s", buffer);
    }
    
    fclose(fp);
  }
} 