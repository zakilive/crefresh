#include<stdio.h>
int main()
{
    int i,flag,N;
    flag=0;
    printf("eNter number to check prime: ");
    scanf("%d",&N);
    if
        (N==1)
        flag=1;
    else
{

    for(i=2;i<=N;i++)
    {
        if(N%i==0)
            flag=1;
        break;
    }
}
if(flag==0)
    printf("It's prime");
else
    printf("It's not prime");

    return 0;
}
