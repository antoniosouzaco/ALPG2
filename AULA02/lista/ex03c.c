#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int calculoVetor(int vetor[], int soma, int i, int contador){

  if(contador < i){
    return calculoVetor(vetor, soma+vetor[contador], i, contador+1); 
  }

  return soma;  
}

int main(){
  
  int vetor[10], i, soma = 0, contador = 0;

  srand((unsigned) time NULL);

  printf("\nVetor; ");
  for (i = 0; i < 10; i++){
    vetor[i] = rand() % 20;
    if(i < 9){
      printf("%i + ",vetor[i]);
    }else if(i == 9){
      printf("%i = ",vetor[i]);
    }
  }
  printf("%i\n\n", calculoVetor(vetor, soma, i, contador));

  return 0;
}