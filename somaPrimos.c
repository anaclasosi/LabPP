/*
*Arquivo: somaPrimos
*Data de criação: 24/nov/2022
*Autor: Ana Clara Sousa Silva
*Médio 1
*/

#include <stdio.h>
/*#include <stdbool.h>*/

bool ehPrimo(int n);

int main(void){
    int n;
    printf("informe o numero desejado: ");
    scanf("%d", &n);
    printf("O numero %d ",n );
    printf(ehPrimo(n)? "é" : "não é");
    printf(" primo!\n");
    return 0;
}

bool ehPrimo(int n) {
    for(int i = 2; i < n; i++){
        if( n % i == 0){
            return false; }
    }
    return true;
}