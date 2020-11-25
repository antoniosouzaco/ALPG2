#include <stdio.h>
#include <stdlib.h>


void ordena(int *x, int *y, int *z){

    int aux;
    
    if(*x > *y){

        aux = *x;
        *x = *y;
        *y = aux;

    }
    if(*y > *z){

        aux = *y;
        *y = *z;
        *z = aux;

    }
    if(*x > *y){

        aux = *x;
        *x = *y;
        *y = aux;

    }

    return;

}

int main(){

    int a = 7, b = 9, c = 13; 

    ordena(&a, &b, &c);
    printf("\n%i %i %i \n\n",a,b,c);


    return 0;
}