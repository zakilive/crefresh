#include<stdio.h>
int main()
{
    int N,sum;
    printf("Enter number: ");
    scanf("%d",&N);
    for(sum=0;N!=0;N=N/10)
    {
        sum=sum+N%10;
    }
    printf("%d",sum);


    return 0;
}
