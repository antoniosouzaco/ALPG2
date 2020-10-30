#include <stdio.h>
#include <stdlib.h>


int main(){
    int i;

    printf("Escolha um núemro de 2 a 20: ");
    scanf("%i",&i);

    if(i >= 2 && i <= 20){
        for (int x = 0; x < i; x++){
            for (int z = 0; z <= x; z++){
                printf("*");
            }
            printf("\n");
        }
    }else{
        printf("Escolha apenas números emtre 2 ou 20!\n");
    }
    
    return 0;
}