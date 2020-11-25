#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 8 letras,
armazene em um vetor, e diga quantas
consoantes foram lidas. Imprima na tela
 somente as consoantes.
*/
int main()
{
    char letras[8];
    int i;
    int cons=0; //contador de consoantes
    printf("digite 8 letras\n");

    for(i=0;i<8;i++)
    {
        scanf(" %c",&letras[i]);
    }

    //gets(letras);
    //fgets(letras,9,stdin);


    //escrever as consoantes
    for(i=0;i<8;i++)
    {
        if(letras[i]!='a' && letras[i] != 'e' && letras[i] != 'i'
           && letras[i] != 'o' && letras[i] != 'u' &&
            letras[i]!='A' && letras[i] != 'E' && letras[i] != 'I'
           && letras[i] != 'O' && letras[i] != 'U'){
            cons++;
            printf("%c",letras[i]);
           }
    }
    printf("\nNumero de consoantes: %d\n",cons);



    return 0;
}
