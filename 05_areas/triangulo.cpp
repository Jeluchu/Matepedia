
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

  float b, h, area;

  printf(AZULETE "Introduce la longitud de la base: " NORMAL);
  scanf(" %f", &b);

  printf(AZULETE "Introduce la longitud de la altura: " NORMAL);
  scanf(" %f", &h);

  printf("+---------------------------------------------------------------------+\n");
  area = b*h/2.0;
  printf(AMARILLO "El resultado del área es: " NORMAL NEGRITA "%.2f\n" NORMAL, area);

  return EXIT_SUCCESS;
}
