/*
*Arquivo: imc.c
*Data de criação: 06/nov/2022
*Autor: Ana Clara Sousa Silva
*Médio 2
*/

#include <stdio.h>

int main() {
  long int a,b,c;
  int n,cont;

  printf("Digite quantos termos da sequencia de Fibonacci voce quer:\n");
  scanf("%d", &n);

  if (n == 1) {
    printf("0, ...");
  }
  else {
    
    a = 1;
    b = 1;
    cont = 2;

    printf("0\n");
    printf("1\n1\n");

    while(cont+2 <= n) {
      c = a + b;
      printf("%ld\n", c);
      a = b;
      b = c;
      cont++;
    }
    printf(" ...");
  }

  return(0);
}