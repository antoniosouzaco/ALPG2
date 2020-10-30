#include <stdio.h>
#include <stdlib.h>

int main(){
    float produto;

    printf("Digite o valor do produto: ");
    scanf("%f",&produto);

    if(produto > 0 && produto <= 50.0){
        produto = (produto * 95) / 100;
    }else if (produto <= 100.00 && produto > 50.0){
        produto = (produto * 90) / 100;
    }else if (produto > 100){
        produto = (produto * 85) / 100;
    }

    printf("\n\n O valor final do produto com desconto: R$ %.2f\n\n",produto);


    return 0;    
}