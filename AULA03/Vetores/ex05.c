//Faça um programa que leia um vetor de 5 números inteiros, mostre a soma e a multiplicação desses números.

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int adicionarNumeros(int vetor[], int i){

    if(i < TAM){
        printf("%i) ", i+1);
        scanf("%i", &vetor[i]);
        adicionarNumeros(vetor, i+1);
    }
    return vetor;
}

int somarNumeros(int vetor[], int i, int soma){

    if(i < TAM){
        soma = vetor[i] + somarNumeros(vetor, i+1, soma);
    }
    return soma;
}

int multiplicarNumeros(int vetor[], int i, int vezes){

    if(i < TAM){
        vezes = vetor[i] * multiplicarNumeros(vetor, i+1, vezes);
    }
    return vezes;
}

int main(){
    int vetor[TAM];

    adicionarNumeros(vetor, 0);
    printf("\nNumeros digitados: ");
    for(int i = 0; i < TAM; i++){
        if (i == TAM-1) printf("%i. ",vetor[i]);
        else{
            printf("%i, ",vetor[i]);
        }
    }
    puts("");

    int soma = somarNumeros(vetor, 0, 0);
    int multiplicador = multiplicarNumeros(vetor, 0, 1);

    puts("");
    printf("Soma = %i \nMultiplicacao = %i \n\n",soma, multiplicador);

    return 0;

}