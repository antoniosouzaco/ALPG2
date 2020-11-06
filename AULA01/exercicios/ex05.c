#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%i",&num);

    for(int i=0; i<num; i++){
        printf("IFSP\n");
    }

    return 0;    
}