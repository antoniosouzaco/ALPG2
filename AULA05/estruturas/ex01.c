#include <stdio.h>
#include <stdlib.h>


struct aluno{
    char nome[21];
    int registroAcademico;
    float nota1, nota2, mediaAritimetica;
};



int main(){

    struct aluno aluno01;

    printf("Nome: ");
    scanf(" %s",&aluno01.nome);
    printf("Matricula: ");
    scanf("%i",&aluno01.registroAcademico);
    printf("1º Nota: ");
    scanf("%f",&aluno01.nota1);
    printf("2º nota: ");
    scanf("%f",&aluno01.nota2);

    aluno01.mediaAritimetica = (aluno01.nota1+aluno01.nota2)/2;

    puts("********************************************");
    puts(aluno01.nome);
    printf("Ra - %d \n",aluno01.registroAcademico);
    printf("Nota 1 - %.2f \n",aluno01.nota1);
    printf("Nota 2 - %.2f \n",aluno01.nota2);
    printf("Media  - %.2f \n",aluno01.mediaAritimetica);
      

    return 0;
}