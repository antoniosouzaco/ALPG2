#include <stdio.h>
#include <stdlib.h>

//três números e qual é o maior
int main(){
    int num, maior;

    for(int i = 0; i <3; i++){
        printf("%i)Digite um número: ",i+1);
        scanf("%i",&num);
        if(i == 0){
            maior = num;
        }else if(num > maior){
            maior = num;
        }
    }

    printf("\n O maior número é %i\n\n",maior);

    return 0;
}