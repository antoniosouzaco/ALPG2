#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int vet[5] = {32, 19, 10, 1, 11}, indice;

    indice = vetMaiorIndice(vet);

    printf("\n\nIndice >>>>>> %i\n\n",indice);

    return 0;
}

int vetMaiorIndice(int vetor[]){
    int i, x=0, maior;

    maior = vetor[x];
    for(i = 0; i < 5; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
            x = i;
        }
    }

    return x;
}