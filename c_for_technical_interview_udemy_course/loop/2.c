
#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("enter n:");
    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n)
        sum += i++;

    printf("Sum of %d natural number = %d\n",n,sum);
    return 0;
}
