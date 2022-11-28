/*
*Arquivo: areaTriRet
*Data de criação: 24/nov/2022
*Autor: Ana Clara Sousa Silva
*Basico 3
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int xA,xB,yA,yB, xC, yC;
    float distAB, distAC, distCB, area;
    printf("Digite as cordenadas x e y do ponto A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas x e y do ponto B: ");
    scanf("%f %f", &xB, &yB);
    xC = xB;
    yC = yA;

    distAB = sqrt(pow(xA-xB, 2) + pow(yA-yB, 2));
    distAC = sqrt(pow(xA-xC, 2) + pow(yA-yC, 2));
    distCB = sqrt(pow(xC-xB, 2) + pow(yC-yB, 2));

    area = distAC * distCB;
    printf("%f", area);
}