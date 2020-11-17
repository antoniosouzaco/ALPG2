//Faça uma função recursiva que retorne o maior elemento em um vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15


int adicionarElementos(int vetor[], int i){
    
    if(i < TAM){
        vetor[i] = rand() % 110;
        printf("%i ",vetor[i]);
        adicionarElementos(vetor, i+1);
    }
    return vetor;
}

int maiorNumero(int vetor[], int i, int x){

    if(i < TAM){
        if(i == 0) x = vetor[i];
        if(vetor[i] > x) x = vetor[i];
        return x = maiorNumero(vetor, i+1, x);
    }

    return x;
}

int main(){
    
    int vetor[TAM], maior;
    srand((unsigned) time (NULL));

    puts("\nOs vetores adicionados: ");
    adicionarElementos(vetor, 0);
    puts("");
    maior = maiorNumero(vetor, 0, vetor[0]);
    printf("\nO valor do maior elementos eh >> %i\n\n",maior);

    return 0;
}