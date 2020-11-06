#include <stdio.h>
#include <stdlib.h>


int binario(numero){
  int bin, teste;
  bin = numero % 2;
  teste = numero;
  numero = numero / 2;
  if(teste == 0){
    return;
  }else{
    binario(numero);
    printf("%i",bin);
  }
}

int main(){
  
  int numero;

  printf("Numero: ");
  scanf("%i",&numero);

  binario(numero);  

  return 0;
}