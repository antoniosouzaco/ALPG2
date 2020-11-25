#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int main()
{
    char plv[51];
    int i;
    int nn; //numero nome
    int vogais;

    for(nn=1;nn<=MAX;nn++){
        vogais=0;
        printf("Digite nome %d, por favor\n",nn);
        scanf("%s",plv);

        //calcula a qtd de vogais
        for(i=0;i<strlen(plv);i++){
            if(!(plv[i]!='a' && plv[i] != 'e' && plv[i] != 'i'
               && plv[i] != 'o' && plv[i] != 'u' &&
                plv[i]!='A' && plv[i] != 'E' && plv[i] != 'I'
               && plv[i] != 'O' && plv[i] != 'U')){
                vogais++;
               }
        }

        //mostra a qtd de vogais
        printf("%d vogais\n\n",vogais);
    }
    return 0;
}
