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

  float numero, porcentajea, porcentajeb, Resultado;

  printf(AZULETE "Introduce el primer número deseado: " NORMAL);
  scanf("\n%f", &numero);

  printf(AZULETE "Introduce el número del porcentaje deseado: " NORMAL);
  scanf("\n%f", &porcentajea);

  printf("+---------------------------------------------------------------------+\n");
  porcentajeb = porcentajea /100;
  Resultado = numero*porcentajeb;
  printf(AMARILLO "El %.0f por ciento de %.0f es: " NORMAL
         NEGRITA "%.2f\n" NORMAL, porcentajea, numero, Resultado);

  return EXIT_SUCCESS;
}
