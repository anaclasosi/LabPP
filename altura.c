/*
*Arquivo: altura
*Data de criação: 08/jan/2023
*Autor: Ana Clara Sousa Silva
*Básico 3
*/

#include <stdio.h>

typedef
    struct Comprimento {
        int metros, centimetros;
    }
Comprimento;

int cm(int x);

int main(void) {
    Comprimento altura;
    printf("Entre com uma altura: ");
    scanf("%d.%d", &altura.metros, &altura.centimetros);
    altura.centimetros = cm(altura.centimetros);
    printf("Altura %dm%d\n", altura.metros, altura.centimetros);
    return 0;
}

int cm(int x) {
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}