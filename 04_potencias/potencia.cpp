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

  float op1, op2, Resultado;

  printf(AZULETE "Introduce el primer número deseado: " NORMAL);
  scanf(" %f", &op1);

  printf(AZULETE "Introduce el número del exponente deseado: " NORMAL);
  scanf(" %f", &op2);

  printf("+---------------------------------------------------------------------+\n");
  if(op2<0){
  printf(ROJO "Solo se admitirán exponentes positivos\n" NORMAL);
  }else{
      Resultado = pow(op1,op2);
      printf(AMARILLO "El resultado de %.0f^%.0f es: " NORMAL
             NEGRITA "%.2f\n" NORMAL, op1, op2, Resultado);
  }

  return EXIT_SUCCESS;
}
