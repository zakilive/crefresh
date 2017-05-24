#include<stdio.h>
#include<math.h>
int getTotalDigits(int);
int isArmStrong(int n);

int getTotalDigits(int n)
{
    int count = 0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int isArmStrong(int n)
{
    int count=getTotalDigits(n);
    int temp=n;
    int sum=0;
    while(n>0)
    {
        sum=sum+pow(n%10,count);
        n=n/10;
    }
    return temp==sum;
}

int main()
{
    int i;
    for(i=1; i<=50000; i++)
    {
        if(isArmStrong(i))
        {
            printf("%d is armstrong number\n",i);
        }
    }

    return 0;
}
