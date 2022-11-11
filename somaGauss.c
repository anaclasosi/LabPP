/*
*Arquivo: somaGauss.c
*Data de criação: 06/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 2
*/

#include <stdio.h>

int main(void) {

    int n, i = 1, j = 1, soma = 0;

    printf("Digite um número maior que 1: ");
    scanf("%d", &n);
   
    // calculo da soma
    if(n>=1){
        while(i<=n){
            soma = (soma + j++);
            i++;
        }
        printf("A soma gaussiana é %d\n", soma);
    }
    else{
        printf("O número informado não é maior que 1! Digite novamente.\n");
    }
    


    return 0;
}