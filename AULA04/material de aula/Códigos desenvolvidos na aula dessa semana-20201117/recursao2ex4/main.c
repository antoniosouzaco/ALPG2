#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverteR(char vet[], int p, int u){
    char aux;
    if(u<=p) return;
    //inverte as letras de posição
    aux=vet[p];
    vet[p]=vet[u];
    vet[u]=aux;
    inverteR(vet,p+1,u-1);
}

void inverte(char plv[]){
    inverteR(plv,0,strlen(plv)-1);
}

int main()
{
    char plv[51];
    scanf("%s",plv);
    inverte(plv);
    printf(plv);
    return 0;
}
