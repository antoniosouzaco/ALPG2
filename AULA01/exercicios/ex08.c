#include <stdio.h>
#include <stdlib.h>


int main(){
    float vet[10], maior;
    int i;

    for(int i = 0; i < 10; i++){
        printf("%i) : ",i+1);
        scanf("%f",&vet[i]);
    }
    puts("");
    for (i = 9; i >= 0; i--){
        printf("%.2f\n",vet[i]);
    }
    

    return 0;
}