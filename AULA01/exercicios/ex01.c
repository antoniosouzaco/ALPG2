#include <stdio.h>
#include <stdlib.h>


int main(){
    float notas, media = 0;

    for(int i = 0; i <5; i++){
        printf("Digite a nota %i: ",i+1);
        scanf("%f",&notas);
        media += notas;
    }
    media /= 5;

    printf("\n\n A média do aluno foi %.1f.\n\n",media);

    return 0;
}