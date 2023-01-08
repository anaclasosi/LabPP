/*
*Arquivo: mdc
*Data de criação: 08/jan/2023
*Autor: Ana Clara Sousa Silva
*Básico 1
*/

#include <stdio.h>

 int main(void){

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    while (a != b) 
     //Enquanto forem diferentes não encontraram o mdc
        if (a > b) a = a - b;
        else b = b - a;
           printf("%d\n", a);
    return 0;
}