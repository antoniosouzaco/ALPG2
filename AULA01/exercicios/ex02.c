#include <stdio.h>
#include <stdlib.h>

//verificação de números pares
int main(){
    int num;

    printf("Digite um número: ");
    scanf("%i",&num);

    num %= 2;

    if (num == 0){
        printf("\n\n<<<<< PAR >>>>>>>\n\n");
    }else if (num == 1){
        printf("\n\n<<<<< IMPAR >>>>>>>\n\n");
    }

    return 0;
}