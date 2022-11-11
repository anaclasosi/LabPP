/*
*Arquivo: imc.c
*Data de criação: 06/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 4
*/

           //Não funcionou!!!
#include <stdio.h>

int main(void) {
    
    int n, d, s, acc = 0;

    printf("Digite um número: ");
    scanf("%d", &n);
    d = n;
    s = n;

    while(d > 0){
        if(n % d == 0){
            acc += d;
        }
        d--;
    }

    printf("Soma dos divisores positivos: %d", acc);

    return 0;
}