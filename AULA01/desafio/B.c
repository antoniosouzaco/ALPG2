#include <stdlib.h>
#include <stdio.h>

int main()
{
  float codigo, quantidade;

  printf("###################################\n");
  printf("Codigo    Expecificações     PREÇO\n");
  printf("-----------------------------------\n");
  printf("  1       Cachorro Quente      4.00\n");
  printf("  2       X-Salada             4.50\n");
  printf("  3       B-Bacon              5.00\n");
  printf("  4       Torrada Simples      2.00\n");
  printf("  5       Refrigerantes        1.50\n");
  printf("###################################\n");

  scanf("%f%f", &codigo, &quantidade);
  
  if(codigo==1) 
    printf("Total: R$ %.2f\n\n",4.0*quantidade);
  else if (codigo==2) 
    printf("Total: R$ %.2f\n\n",4.5*quantidade);
  else if (codigo==3) 
    printf("Total: R$ %.2f\n\n",5.0*quantidade);
  else if (codigo==4) 
    printf("Total: R$ %.2f\n\n",2.0*quantidade);
  else if (codigo==5) 
    printf("Total: R$ %.2f\n\n",1.5*quantidade);

  return 0;
}