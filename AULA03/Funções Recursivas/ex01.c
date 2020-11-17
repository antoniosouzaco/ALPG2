//Crie uma função que calcule, de forma recursiva, o valor de x elevado a y.

#include <stdio.h>
#include <stdlib.h>


void imprimirTriangulo(int n, int i){

    if(i < n){
        printf("* ");
        imprimirTriangulo(n,i+1);
    }
    if(i == n) puts("");
    if (i >= n && n  > 0){
            imprimirTriangulo(n-1,0);
    }
    if(n == 0){
        return;
    }
}
int main(){
    
    int n;

    printf("Digite o tamanho do triangulo: ");
    scanf("%i",&n);

    puts("");
    imprimirTriangulo(n, 0);

    return 0;
}