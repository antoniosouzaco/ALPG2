//Faça um programa que, para um vetor X de 10 elementos inteiros entrados via teclado, transforme para zero todos os elementos negativos e imprima o vetor resultante.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10


int main(){
    int x[TAM];

    for(int i = 0; i < TAM; i++){
        printf("%.2i): ",i+1);
        scanf("%i",&x[i]);
        if(x[i] < 0) x[i] = 0;
    }
    
    puts("");
    for(int i = 0; i < TAM; i++){
        printf("%i ",x[i]);
    }puts("");



    puts("");
    return 0;

}