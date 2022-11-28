/*
*Arquivo: impares
*Data de criação: 24/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 2
*/

#include <stdio.h>

int main (){
    int a, b;
    printf("Digite um numero A: ");
    scanf("%d",&a);
    printf("Digite um número B, tal que seja menor que A: ");
    scanf("%d", &b);

    for(int i=a;i>b;--i){
	    if (i%2==1)
	    printf("%d ",i);
    }
}