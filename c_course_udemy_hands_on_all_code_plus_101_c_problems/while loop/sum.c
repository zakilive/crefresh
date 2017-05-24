
#include<stdio.h>
int main()
{
    int i,sum,N;
    printf("\nEnter value of N: ");
    scanf("%d",&N);
    sum=0;
    i=1;
    while(i<=N)
    {
        sum=sum+i;
        i++;
    }
    printf("\n Sum of first %d natural number %d",N,sum);

    return 0;
}
