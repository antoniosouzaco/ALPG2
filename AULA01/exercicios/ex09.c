#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int valor;

    printf("Digite um valor: ");
    scanf("%i",&valor);

    valor = dobro(valor);
    printf("Dobro do valor: %i\n\n",valor);

    return 0;
}

int dobro(int x){
    return x * 2;
}