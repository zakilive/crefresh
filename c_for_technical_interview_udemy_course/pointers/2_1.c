/*

Zaki Live
pointer important topic

*/
#include<stdio.h>
int main()
{

    int *p,*q,**k;
    int x=100;
    p=&x; //p is addresing to the x
    //p=200;
    k=&p; //k is addressing to p; direct value assigning of p can give error
    printf("%d\n",**k); //value of x is printing through k
    **k=**k+2;
    printf("%d\n",x);
    *k=1050;
    printf("%d\n",p);
    p=p+80;
    printf("%d\n",*k);

    return 0;
}
