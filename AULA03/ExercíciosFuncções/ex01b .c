#include <stdio.h>

int x;

void func(){
    printf("%d",x);
    x=100;
}

int main(){
    x=-80;
    func();
    printf("%d",x);
}