/*
*Arquivo: minMax
*Data de criação: 04/dez/2022
*Autor: Ana Clara Sousa Silva
*Básico 1
*/

#include <stdio.h>

int main(void){

    int i, n, nmax = 0, nmin = 0;
    printf("Digite a quantidade de números desejada: ");
    scanf("%d", &n);
    int lista[n];
    
    for(int i=0; i < n; i++) {
        printf("Informe o número: ");
        scanf("%d", lista+i);
    }

    nmin = lista[1];

    for (i = 0; i < n; i++){ // laço que procura min e max
        if (lista[i] <= nmin) {
            nmin = lista[i];
        }
        if (lista[i] >= nmax) {
            nmax = lista[i];
        }
    }
    printf("O maior número é %d\n", nmax);
    printf("O menor número é %d", nmin);
      
    return 0;
}
