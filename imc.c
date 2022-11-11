/*
*Arquivo: imc.c
*Data de criação: 06/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 4
*/

#include <stdio.h>

int main(void) {

    float p, a, imc;

    printf("Digite seu peso em [kg]: ");
    scanf("%f", &p);
    printf("Digite sua altura em [m]: ");
    scanf("%f", &a);

    // calculo do imc
    imc = p / (a * a);
    
    // verificando o resultado do imc
    if (imc < 16)
        printf("%f (perigo de vida)", imc);

    else if ((imc >= 16) && (imc < 17))
        printf("%f (Muito abaixo do peso)", imc);
    
    else if ((imc >= 17) && (imc < 18.5))
        printf("%f (Abaixo do peso)", imc);
    
    else if ((imc >= 18.5) && (imc < 25))
        printf("%f (Peso normal)", imc);
    
    else if ((imc >= 25) && (imc < 30))
        printf("%f (Acima do peso)", imc);
    
    else if ((imc >= 30) && (imc < 35))
        printf("%f (Obesidade grau I)", imc);
    
    else if ((imc >= 35) && (imc < 40))
        printf("%f (Obesidade grau II)", imc);
    
    else
        printf("%f (Obesidade grau III)", imc);
    
    return 0;
}