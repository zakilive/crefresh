#include<stdio.h>
int absolute()
{
    int n;
    printf("Enter Value to Get Absolute:");
    scanf("%d",&n);
    if(n<0)
        n=n*(-1);
    return n;
}

int main()
{
    int t;
    while(1)
    {
        t=absolute();
        printf("Absolute value: %d\n",t);
    }
    return 0;
}
