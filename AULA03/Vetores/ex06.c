//Faça um programa que leia 15 números inteiros e armazene-os em um vetor. Armazene os números pares em um vetor chamado PAR e os números ímpares em um vetor chamado IMPAR. Imprima na tela o conteúdo dos três vetores.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

void imprimePar(int vetor[], int i, int j){
    
    if(i < j){
        if (i == 0){
            printf("Vetor Par: ");
        }
        printf("%i ",vetor[i]);
        imprimePar(vetor, i+1, j);
    }
    return;

}

void imprimeImpar(int vetor[], int i, int j){
    
    if(i < j){
        if (i == 0){
            printf("Vetor Impar: ");
        }
        printf("%i ",vetor[i]);
        imprimeImpar(vetor, i+1, j);
    }
    return;

}

int main(){
    int vetor[TAM], par[TAM], impar[TAM];
    int x, i, j, k;

    srand((unsigned) time (NULL));

    printf("\nNumeros do vetor: ");
    for(i = 0, j = 0, k = 0; i < TAM; i++){
        x = 1 + rand() % 100;
        vetor[i] = x;
        if(x%2 == 0){
            par[j] = x;
            j++;
        }else{
            impar[k] = x;
            k++;
        }
        printf("%i ",vetor[i]);
    }
    puts("");
    imprimePar(par, 0, j);
    puts("");
    imprimeImpar(impar, 0, k);
    puts("");
    return 0;

}