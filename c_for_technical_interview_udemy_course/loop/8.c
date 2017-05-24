#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter here:");
    scanf("%d",&n);

    for(sum=0,i=1; i<=n; sum+=i,i++);

        printf("sum of %d natural number is %d\n",n,sum);

    return 0;
}
