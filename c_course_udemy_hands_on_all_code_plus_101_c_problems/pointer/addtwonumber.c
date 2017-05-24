#include<stdio.h>
int main()
{
    int a,b,c;
    int *pa,*pb,*pc;
    a=10;
    b=40;
    pa=&a;
    pb=&b;
    pc=&c;

    *pc=*pb+*pa;

    printf("Sum = %d",*pc);

    return 0;
}
