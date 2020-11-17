//Faça um programa que leia 10 números inteiros do teclado e armazene os números em um vetor. Mostre na tela todos os números armazenados.
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int acrescentarMedia(float notas[], int i){
    
    if(i < TAM){
        printf("Digite a nota - %i): ",i+1);
        scanf("%f",&notas[i]);
        acrescentarMedia(notas, i+1);
    }
    else return notas;
}

float mediaNotas(float notas[], int i){

    float media = 0;

    if(i < TAM){
        if(i == 0) {
            puts("");
            printf("NOTAS; ");
        }
        else if(i < TAM) printf("+ ");
        printf("%.2f ",notas[i]);
        media = mediaNotas(notas, i+1) + notas[i];
    }
    else{
        return media;
    }
    if(i == 0){
    printf("= %.2f",media/TAM);
    puts("");
    puts("");}

}

int main(){

    float notas[TAM];

    acrescentarMedia(notas, 0);
    mediaNotas(notas, 0);

    return 0;
}