//Crie uma função que calcule, de forma recursiva, o valor de x elevado a y.

#include <stdio.h>
#include <stdlib.h>


int potencia(int x, int y){

    if(y > 1){
        x = x * potencia(x, y-1);
    }
    
    return x;
}
int main(){
    int x, y;

    printf("\nDigite o valor do número e em seguida o valor da potencia: ");
    scanf("%i %i",&x, &y);

    printf("\n%i^%i = %i\n\n",x, y, potencia(x, y));


    return 0;
}