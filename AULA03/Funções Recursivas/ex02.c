//Crie uma função que calcule, de forma recursiva, o valor de x elevado a y.

#include <stdio.h>
#include <stdlib.h>


void imprimirTriangulo(int n, int i){

    if(n >= i && i > 0){
        imprimirTriangulo(n,i-1);
        printf("* ");
    }
    if (i == 0){
        imprimirTriangulo(n-1,n-1);
    }
    if (n == i) puts("");
    if(n == 0){
        return;
    }
}
int main(){
    
    int n;

    printf("Digite o tamanho do triangulo: ");
    scanf("%i",&n);

    puts("");
    imprimirTriangulo(n, n);
    puts("");

    return 0;
}