/*
*Arquivo: cos.Taylor.c
*Data de criação: 10/nov/2022
*Autor: Ana Clara Sousa Silva
*Difícil
*/

#include <stdio.h>
#include <math.h>

static long fat = 1; 

int main(void) {
  int n, i;
  double x, z = 0.0;

  printf("Digite dois números para calcular o cos(x): ");
  scanf("%d %lf", &n, &x);

  for (i = 0; i < n; i++ ){
    z = z + (( pow(-1.0 , i) * pow(x, (2.0*i))) / fat );
    fat = fat * (2*i+1) * (2*i+2); 
  }

  printf("\n\ncos(x) = %lf\n", z );

  return 0;
}