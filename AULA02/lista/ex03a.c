#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float divisao(float x){
    
    if(x > 1){
    printf("(1/%.f)+",x);
    return (1 / x) + (divisao (x-1));
    }else {
        printf("(1/%.f)",x);
        return 1;
    }
}

int main(){

    int n;

    srand((unsigned)time(NULL));
    n = 4;//1 + (rand() % 9);
    printf("\n\nO número n = %i, o calculo fica assim:\n",n);
    
    printf(" = %.3f  \n\n", divisao((float)n));
    
    return 0;
}