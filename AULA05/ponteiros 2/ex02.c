#include <stdio.h>
#include <stdlib.h>


float ** criaMatriz(int lar, int alt){
    float **m;
    int i;
    m = (float **) malloc(sizeof(float *)*alt);
    if(m==NULL){
        printf("Memoria insuficiente");
        exit(1);
    }

    for(i=0;i<alt;i++){
        m[i]=(float *) malloc(sizeof(float)*lar);
        if(m[i]==NULL){
            printf("Memoria insuficiente");
            exit(2);
        }
    }
    return m;

}

void preencheMatriz(float **m, int lar, int alt){
    int i,j;
    for(i=0;i<alt;i++){
        for(j=0;j<lar;j++){
            m[i][j]=3;
        }
    }
}

void imprimeMatriz(float **m, int lar, int alt){
    int i,j;
    for(i=0;i<alt;i++){
        for(j=0;j<lar;j++){
            printf("%.1f ",m[i][j]);
        }
        printf("\n");
    }
}

void liberaMatriz(float **m, int alt){
    int i;
    for(i=0;i<alt;i++){
        free(m[i]);
    }
    free(m);
}

int main()
{
    float **m;

    m = criaMatriz(1000,1000);
    preencheMatriz(m,1000,1000);
    //imprimeMatriz(m,3,5);
    liberaMatriz(m,1000);

    return 0;
}