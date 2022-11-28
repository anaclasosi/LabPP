/*
*Arquivo: somaSeqHailst
*Data de criação: 24/nov/2022
*Autor: Ana Clara Sousa Silva
*Médio 2
*/

#include <stdio.h> 
  
    int numero(int num) 
    { 
         int i = num; 
         if (i % 2 == 0) { 
            i = i/2; 
        } 
        else {  
            i = 3 * i + 1; 
        } 
        return (i);
   } 
 
   void hailstone(int num) 
   { 
      int Seq = num;   
      if (Seq == 1){ 
         printf("%i ", Seq); 
      } 
      else{ 
         printf(" %i ", Seq); 
         hailstone(numero(Seq)); // recursão 
      } 
   } 
 
   int tamanho(int num){ // tamanho da recursão
      int Seq = num;   
      if(Seq == 1){ 
         return 1; 
      } 
      else{ 
         return 1+tamanho(numero(Seq));// recursão
      } 
       } 
 
int main(int argu) 
{ 
   int num; 
    printf("\n\n A sequência de Hailstone de um determinado número até 1:\n"); 
	printf("--------------------------------------------------------------\n");   
   printf("Insira qualquer número (positivo) para iniciar a sequência de Hailstone: "); 
   scanf("%i", &num); 
 
   printf("\n A sequência de Hailstone começando em %i é : \n", num); 
   hailstone(num); 
   printf("\n\n"); 
   printf(" O tamanho da sequência é %i. \n\n", tamanho(num)); 
      return 0; 
} 