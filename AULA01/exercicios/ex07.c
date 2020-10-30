#include <stdio.h>
#include <stdlib.h>


int main(){
    int num, i=0;
    float media = 0;

    do{
        printf("Digite um número: ");
        scanf("%i",&num);
        if(num >=0){
            media += num;
            i++;
        }
    } while (num >= 0);
    
    printf("\nQuantidade de numeros digitados; %i.\nMedia dos numeros digitados; %.1f.\n\n",i,media/i);


    return 0;
}