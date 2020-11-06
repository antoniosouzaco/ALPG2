#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n){

  int x;

  if (n==1) return 1;
  if (n==2) return 1;

  x = fibonacci(n - 1) + fibonacci(n - 2);

  return x;

}

int main(){
  int n;

  printf("Digite o valor de termos desejados: ");
  scanf("%i",&n);

  if(n > 0){
    for(int i = 1; i <= n; i++){
      printf("%i ",fibonacci(i));
    }
  }
  puts("");

  return 0;
}