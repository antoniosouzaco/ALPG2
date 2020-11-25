#include <stdio.h>

void func(int x){
    printf("%d",x);
    x=10;
}

int main(){
    int y=0;
    func(y);
    printf("%d",y);
}