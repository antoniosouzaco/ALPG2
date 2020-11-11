//Faça um programa que leia 10 números inteiros do teclado e armazene os números em um vetor. Mostre na tela todos os números armazenados.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int incluir(int vetor[], int tamanho){
    if(tamanho >= 0){
        tamanho--;
        vetor[tamanho] = 1 + rand() % 100;
        incluir(vetor, tamanho);
    }
    else{
        return vetor;
    }
    
}

int main(){

    int vetor[TAM];
    srand((unsigned) time NULL);
    
    incluir(vetor, TAM);

    puts("");
    for(int i = 0; i < 10; i++){
        printf("%i ",vetor[i]);
    }puts("\n");


    return 0;
}