#include<stdio.h>
int main()
{
    const double PI=3.14;
    int x[]={1,2,3};
   // x++;
    int *p;
    p=x;
    p++;
    printf("%p\n",p);


    return 0;
}
