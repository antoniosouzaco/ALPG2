#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int indece(int vetor[], int valor, int i){
  i--;
  if(vetor[i] == valor) return i;
  else if(i < 0) return -1;
  else return indece(vetor, valor, i);  
  
  return 0;
}

int main(){
  
  int vet[15], valor, i;
  srand((unsigned) time NULL);

  for(i = 0; i < 15; i++){
    vet[i] = 1 + rand() % 25;
    for(int x = 0; x < 15; x++){
      if(x != i){
        if(vet[x] == vet[i])
          vet[i] = 1 + rand() % 25;
      }
    }
  }

  printf("Digite o valor entre 1 a 15: ");
  scanf("%i",&valor);

  printf("\n\nO indece eh >>> %i\n\n",indece(vet, valor, i));

  return 0;
}