#include <stdio.h>
#include <stdlib.h>


int main(){
    
    char vet[20];

    printf("Digite uma palavra: ");
    scanf("%s",vet);

    
    for(int i = 0; i <= 20; i ++){
        if(vet[i] == 'a'){
            vet[i] = '@';
        }
    }      
    
    printf("%s\n\n",vet);

    return 0;
}