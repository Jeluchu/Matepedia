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

  double n;

  printf(AZULETE "Introduce el número deseado: " NORMAL);
  scanf("%lf", &n);

  if(n>0){
  printf("+---------------------------------------------------------------------+\n");
  n = cbrt(n);
  printf(AMARILLO "\t  El resultado de la raíz cúbica es: "
         NEGRITA "%lf\n" NORMAL,n);
}else{printf(ROJO "Esta raíz no tiene resultado\n" NORMAL);}

  return EXIT_SUCCESS;
}
