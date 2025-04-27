/**
 * @file    Main.c
 * @author  Rob Beaufort
 * @brief   opdracht voor school
 * @version 1.0
 * @date    1-12-2024
 */

#include <stdio.h>

void signs(int *a, int npts, int *npos, int *nzero, int *nneg){
  for(int i =0; i < npts; i++){
    if (a[i] > 0)
    {
      (*npos)++;
    } else if (a[i] < 0)
    {
      (*nneg)++;
    } else {
      (*nzero)++;
    }
  }
}

int main(int argc, char *argv[]) {

  int array[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
  int *a = array;
  int npts = sizeof(array) / sizeof(array[0]);
  int npos = 0; //het aantal positieve getallen
  int nzero = 0; //het aantal nullen
  int nneg = 0; //het aantal negatieve getallen

  signs(&a, npts, &npos, &nzero, &nneg);

  printf("aantal positieve getallen:%d\n aantal negatieve getallen:%d\n aantal nullen:%d", npos, nneg, nzero);
} 