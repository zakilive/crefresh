
#include<stdio.h>
int main()
{
int a,b,c,x;
a=10;
b=20;
c=(a++)+(b++);
printf("%d",c);
printf("%d %d",++a,++b);
    return 0;
}
