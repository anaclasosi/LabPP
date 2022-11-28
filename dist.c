/*
*Arquivo: dist
*Data de criação: 24/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 1
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int xA,xB,yA,yB;
    float dist;
    printf("Digite as cordenadas x e y do ponto A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas x e y do ponto B: ");
    scanf("%f %f", &xB, &yB);

    dist = sqrt(pow(xA-xB, 2) + pow(yA-yB, 2));

    printf("A distância Euclidiana entre A e B é: %f", dist);
    return 0;
}