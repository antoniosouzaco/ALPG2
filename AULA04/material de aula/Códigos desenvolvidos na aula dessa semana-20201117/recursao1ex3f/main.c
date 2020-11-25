#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Verifique se uma palavra é um palíndromo.

//retorna 1 se for palindromo, e 0, caso contrário
char palindromoR(char plv[], int p, int u){
    if(u<=p) return 1;
    if(plv[p]!=plv[u]) return 0;
    return palindromoR(plv,p+1,u-1);
}

char palindromo(char plv[]){
    return palindromoR(plv,0,strlen(plv)-1);
}

int main()
{
    char plv[51];
    scanf("%s",plv);
    if(palindromo(plv)){
        printf("Palindromo!! Legal!!!");
    }
    else{
        printf("Nao eh palindromo... T_T");
    }
    return 0;
}
