#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {3,6,21,5,80};
    int *p;
    //p=&v[0];
    p=v;
    printf("%d\n",*(p+1)); // *(p+1) = v[1] = p[1] = *(v+1)
    printf("%d\n",*(p+2)); // *(p+2) = v[2]
    p=p+4;
    printf("%d\n",*p);
    printf("%d\n",*(v+2));
    printf("%d\n",v[2]);
    p=v;
    printf("%d\n",p[2]);
    v=v+4;

    /*
    int a=5;
    int *r;
    r = &a;

    printf("%d\n",r);
    printf("%d\n",r+1);
    */
    return 0;
}
