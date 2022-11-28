/*
*Arquivo: divisores
*Data de criação: 24/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 4
*/

#include <stdio.h>

int main(void){

    int valor, i;
    
    printf("Insira um valor para verificar os divisores: ");
    scanf("%d ", &valor);

    for (i=1; i<valor+1;i++){
        if(valor%i==0){
            printf("É divisor %d ", i);
        }
    }
    return 0;
}