/*
*Arquivo: fatorial.c
*Data de criação: 07/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(void) {
    
    int n;
    int64_t i = 1, j = 2, acc =1;

    printf("Digite um número maior que 1: ");
    scanf("%d", &n);

    // Calculo do fatorial
    if(n>=1){
        while(i<n){
            acc = (acc * j++);
            i++;
        }
        printf("O fatorial é %lld\n", acc);
    }
    
    else{
        printf("O número digitado é menor que 1. Digite novamente.\n");
    }

    return 0;
}