#include<stdio.h>
int main()
{
int N,r,sum;
sum=0;
printf("Give a number:");
scanf("%d",&N);
do{
    r=N%10;
    sum=sum+r;
    N=N/10;
}while(N!=0);

printf("%d",sum);
    return 0;
}
