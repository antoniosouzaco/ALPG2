#include <stdio.h>
#include <stdlib.h>

void escrevaMatriz(int *m[5][5]){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                printf("%d ",*m[i][j]);
        }
        printf("\n");
    }
}

void altereMatriz(int *m[5][5], int n){
    *m[0][0]=n;
}

int main()
{
    int *m[5][5];
    int um=1, zero=0;
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j) m[i][j]=&um;
            else m[i][j]=&zero;
        }
    }
    altereMatriz(m,8);
    escrevaMatriz(m);

    return 0;
}