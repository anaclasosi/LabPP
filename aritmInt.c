/*
*Arquivo: aritmInt.c
*Data de criação: 03/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 1
*/

#include <stdio.h>

int main(void) {

    int i, j;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &i, &j);
    printf("O valor digitado foi: %d e %d\n", i, j);

    // Imprime na tela o resultado
    printf("%d+%d = %d, ", i, j, i+j);
    printf("%d-%d = %d, ", i, j, i-j);
    printf("%d*%d = %d, ", i, j, i*j);
    printf("%d/%d = %d, ", i, j, i/j);
    printf("%d%%%d = %d\n", i, j, i%j);

    return 0;
}