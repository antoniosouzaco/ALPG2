#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int *p;
    x=2;
    p=5;
    p=&x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&p);
    x=3;
    printf("%d\n",*p);
    *p=7;
    printf("%d\n",x);
}
