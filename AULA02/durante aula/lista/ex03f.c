#include <stdio.h>
#include <string.h>
#define LIM 80
#define FALSE 0
#define TRUE 1

int palindromo(char verso[]){
  int i =  0, n = strlen(verso), k = n / 2, cond = TRUE;

  while (cond && i < k){
    cond = verso[i] == verso[n - i - 1];
    i = i + 1;
  }

  return cond;
}

int main(){
    char verso[80];

    scanf("%s",&verso);
    
    if (palindromo(verso)) printf("Eh palindromo\n");

    else printf("Nao eh palindromo\n");
    
    return 0;
  
  return 0; 
}