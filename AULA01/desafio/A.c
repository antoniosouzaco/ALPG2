#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[6] = {10000,5000,2000,1000,500,200};
    float moedas[6] = {100,50,25,10,5,1};
    float valor;
    int i, x, z, valorTratado;

    printf("Digite um valor: ");
    scanf("%f",&valor);
    
    for(i = 0; i == 0; ){
        if(valor <= 0.00 || valor >1000000.00){
            printf("Digite um valor maior que R$0.00 e menor que R$1000000.00\n Tente novamente: ");
            scanf("%f",&valor);
        }
        else i=1;
    }
    
    valorTratado = valor*100;

    if(valorTratado > 0){
        
        printf("-----------------------------------------------");
        printf("\nNOTAS:\n\n");
        for(i = 0; i < 6; i++){
            z = 0;
            for(x = 0; x == 0;){
                if (valorTratado >= notas[i]){
                    z++;
                    valorTratado = valorTratado - notas[i];
                }else x++;
            }
            printf("%i nota(s) de R$ %.2f\n", z, notas[i]/100);
        }
        printf("-----------------------------------------------");
        printf("\nMOEDAS:\n\n");
        for(i = 0; i < 6; i++){
            z = 0;
            for(x = 0; x == 0;){
                if (valorTratado >= moedas[i]){
                    valorTratado -= moedas[i];
                    z++;                    
                }
                else x++;
            }
            printf("%i moeda(s) de R$ %.2f\n",z, moedas[i]/100);
        }  
    }else printf("\n\n<<<<<<<<<<  ERRO >>>>>>>>>>>>>>>>>\n\n");  

    return 0;
}