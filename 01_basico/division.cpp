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

  double op1, op2, Resultado;

  printf(AZULETE "Introducir el primer número deseado: " NORMAL);
  scanf(" %lf", &op1);

  printf(AZULETE "Introducir el segundo número deseado: " NORMAL);
  scanf(" %lf", &op2);
  printf("+---------------------------------------------------------------------+\n");
  if((op1<=10000000) || (op2<=10000000)){
    Resultado = op1/op2;
    printf(AMARILLO"El resultado de la división es: " NORMAL
           NEGRITA "%.2f\n" NORMAL, Resultado);
  }else{printf(ROJO"Introduce valores menores de 10.000.000\n" NORMAL);}

  return EXIT_SUCCESS;
}
