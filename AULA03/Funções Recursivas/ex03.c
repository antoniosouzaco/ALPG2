//Crie uma função recursiva que procure por um valor específico em um vetor de inteiros já ordenado e retorne o índice em que se encontra o elemento, ou -1 caso o elemento não se encontre no vetor. A função que você criou é, geralmente, mais eficiente do que uma simples busca sequencial no vetor? Argumente. Caso você ache que não, tente implementar uma função mais eficiente.

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 15


int pesquisarNumero(int numero[], int retorno, int i){

    if(numero[i] == retorno) return i;
    else if(i < TAMANHO) return pesquisarNumero(numero, retorno, i+1);
    return -1;
    
}
int main(){
    
    int vetor[TAMANHO]={1,2,3,4,5,7,8,9,10,13,15,19,23,24,25}, pesquisa, retorno;

    printf("Digite um numero para pesquisar de 1 a 25: ");
    scanf("%i",&pesquisa);

    puts("");
    retorno = pesquisarNumero(vetor, pesquisa, 0);
    printf(">>>>>indice =  %i\n\n",retorno);

    return 0;
}