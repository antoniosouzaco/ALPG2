#include <stdio.h>
#include <stdlib.h>



int main(){

    struct Pessoa{
        char nome[21];
        int idade;
    };
    
    struct Pessoa P1, *P1_1;
    *P1_1 = P1;

    printf("Digite o nome: ");
    scanf(" %s",&P1.nome);
    printf("Digite a idade: ");
    scanf("%i",&P1.idade);
    
    puts("********************************************************************");
    printf(" Nome: %s \nIdade: %i",P1.nome,P1.idade);


    return 0;
}