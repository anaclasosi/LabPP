/*
*Arquivo: maxHappyPrime
*Data de criação: 26/nov/2022
*Autor: Ana Clara Sousa Silva
*Difícil
*/

#include <stdio.h>    
       
int HappyNumber(int num){    
    int rem = 0, soma = 0;    
           
    while(num > 0){    
        rem = num%10;    
        soma = soma + (rem*rem);    
        num = num/10;    
    }    
    return soma;    
}    
        
int main(){    

    int num;    
    printf("Digite um número para saber se ele é feliz: ");
    scanf("%d", &num);
    int result = num;    
        
    while(result != 1 && result != 4){    
        result = HappyNumber(result);    
    }    
        
    if(result == 1)    
        printf("%d is a happy number", num);      
    else if(result == 4)    
        printf("%d is not a happy number", num);     
     
    return 0;    
}    