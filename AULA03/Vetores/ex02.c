//Faça um programa que leia 10 números inteiros do teclado e armazene os números em um vetor. Mostre na tela, em ordem inversa, todos os números armazenados.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int incluir(int vetor[],int i, int tamanho){
    if(i < tamanho){
        vetor[i] = 1 + rand() % 100;
        incluir(vetor, i+1, tamanho);
    }
    else{
        return vetor;
    }
    
}

int main(){

    int vetor[TAM];
    srand((unsigned) time NULL);
    
    incluir(vetor, 0, TAM);

    puts("");
    for(int i = 0; i < 10; i++){
        if(i==0){
            printf("Vetor: ");
        }
        printf("%i ",vetor[i]);
    }puts("");
    puts("");
    for(int i = TAM-1; i >= 0;i--){
        if(i==9){
            printf("Inverso: ");
        }
        printf("%i ",vetor[i]);
    }puts("\n");


    return 0;
}