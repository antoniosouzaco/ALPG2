#include <stdio.h>
#include <stdlib.h>


int main(){
    
    FILE *ler;
    int i, j, z, x, soma;

    ler = fopen("ex11.txt", "r");
    fscanf(ler, "%i %i %i %i", &i, &j, &z, &x);
    soma = i+j+z+x;

    printf("\n\nSOMA = %i\n\n", soma);

    return 0;
}