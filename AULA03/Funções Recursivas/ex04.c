// Crie uma função recursiva para inverter uma string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char palavraFunc[], int i, int x) {
    char aux1, aux2;
    if(strlen(palavraFunc) > i){
        aux1 = palavraFunc[i];
        aux2 = palavraFunc[x];
        palavraFunc[i] = aux2;
        palavraFunc[x] = aux1;
        if(i >= x-1) return ;
    }
    inverte(palavraFunc, i+1, x-1);
}

int main(void) {
    char palavra[] = "arara e ave";

    puts(palavra);    
    inverte(palavra, 0, strlen(palavra)-1);
    puts(palavra);
    
    return 0;
}