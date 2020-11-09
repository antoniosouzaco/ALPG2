#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int palindromo(char palavra[], int i, int j,int retorno){
  i--;
  if(i >= 0){
    if(palavra[i] == palavra[j]){
      retorno = 1 * palindromo(palavra, i, j+1, retorno);
    }else{
      return 0;
    }
  }
  return retorno;
}

int minuscula(char palavra[], int i){
  i--;

  int j = (int)palavra[i];      

  if(j >= 65 && j <= 90){
    j += 32;
    palavra[i] = j;
  }
  if(i > 0){
    minuscula(palavra, i);
  }

  return palavra;
}

int main(){
  
  char palavra[80];
  int i;
  
  scanf("%s",&palavra);

  i = strlen(palavra);
  
  minuscula(palavra, i);

  if(palindromo(palavra, i, 0, 1)) printf("\n%s eh palindromo\n", palavra);  
  else printf("\nNao palindromo\n");  
    
  return 0; 
}