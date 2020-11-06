#include <stdio.h>
#include <stdlib.h>


void vogais(char *p){

    if(*p=='\0') return;
    if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u') printf("%c",*p);
        
    vogais(p+1);
}

int main(){
    
    vogais("abobora");

   return 0;

}