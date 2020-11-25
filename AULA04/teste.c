#include <stdio.h>
#include <stdlib.h>


//void duplica(int *x){
//    *x= 2*(*x);
//}
//
//int main(){
//    int num = 4;
//    duplica(&num);
//    printf("%d",num);
//    return 0;
//}

//int main(){
//    int x=10;
//    int *pt = &x;
//
//    printf("\n  x = %i",x);
//    printf("\n &x = %i",&x);
//    printf("\n*pt = %i",*pt);
//    int j = pt;
//    printf("\n pt = %i\n\n",j);
//}

int main(){
    float a=2.5;
    float *pf;
    float **ppf;
    pf=&a;
    ppf=&pf;


    printf("\n*pf = %i",*pf);
    printf("\n**ppf = %i",**ppf);
    printf("\n&pf = %i",&pf);
    printf("\n**&pf = %i",**&pf);
    printf("\npf = %i",pf);
    printf("\n*&*pf = %i",*&*pf);
    printf("\n*&a = %i",*&a);
    printf("\npf = %i",pf);
    printf("\nppf = %i",ppf);
    printf("\n*ppf = %i",*ppf);





    puts("");
}