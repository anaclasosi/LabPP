/*
*Arquivo: contaVogais
*Data de criação: 08/dez/2022
*Autor: Ana Clara Sousa Silva
*Básico 1
*/

#include<stdio.h>
#include<string.h>
#define n 1024 //Byte

void getstr(char * str, int nchar);

int main(void){

    char msg[n];
    printf("Entre com uma mensagem: ");
    getstr(msg, n);
    printf("Você entrou com:\n%s\n", msg);
    
    return 0;
}

void getstr(char * str, int nchar){
        char aux;
        for(int i = 0; i < nchar; i++){
            aux = getchar();
            if(aux!= '\n'){
                str[i] = aux;
            }
            else{
                str[i] = '\0';
                break;
            }
        }
        str[nchar-1] = '\0';
    }