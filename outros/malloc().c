#include <stdlib.h>
#include <stdio.h>


int main(){

    int *p = (int *) malloc(sizeof(int));

    *p = 1000;

    printf("\n%i\n", *p);

    
    return 0;
}