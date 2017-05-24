#include<stdio.h>
int main()
{

int N,r,sum;
sum=0;
printf("Enter number: ");
scanf("%d",&N);
while(N!=0)
{
    r=N%10;
    sum=sum+r;
    N=N/10;
}
printf("Sum of %d",sum);


    return 0;
}
