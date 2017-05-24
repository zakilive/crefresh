#include<stdio.h>

int sum(int a,int b)
{
    int total;
    total=a+b;
    return total;
}


int main()
{
    int total,a,b;
    scanf("%d %d",&a,&b);
    total=sum(a,b);
    printf("%d\n",total);
    return 0;
}
