//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

// LIBRERÍAS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>


// DEFINICIÓN
#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"

int main(){

  int dividendo,divisor,resto;

  printf(AZULETE "Introduce el dividendo: " NORMAL);
  scanf("%d",&dividendo);

  printf(AZULETE "Introduce el divisor: " NORMAL);
  scanf("%d",&divisor);
  printf("+---------------------------------------------------------------------+\n");
  resto=dividendo%divisor;
  printf(AMARILLO "\t  El resto de la division es: " NORMAL
         NEGRITA "%d\n" NORMAL,resto);

  return EXIT_SUCCESS;
}
