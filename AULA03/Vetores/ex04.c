//Faça um programa que leia 8 letras, armazene em um vetor, e diga quantas consoantes foram lidas. Imprima na tela somente as consoantes.
#include <stdio.h>
#include <stdlib.h>
#define TAM 8
 
int consoantes(char letras[], int i, int contador){
 
    if(i < TAM){
        if(letras[i] != 'a' && letras[i] != 'e' && letras[i] != 'i' && letras[i] != 'o' && letras[i] != 'u'){
            contador += 1;
            printf("%c ", letras[i]);
        }
        return contador = consoantes(letras,i+1,contador);
    }
    return contador;
}
 
int main(){
 
    char l[TAM];
    int contador;

    printf("digite as letras %i desejdas:\n",TAM);
    for(int i = 0; i < TAM;i++) scanf(" %c",&l[i]);

    contador = consoantes(l, 0, 0);
    
    printf("\nConsoantes digitadas: %d\n\n",contador);
 
 return 0;
}