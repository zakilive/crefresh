#include<stdio.h>
int main()
{
    int year,x;
    printf("Enter year:");
    scanf("%d",&year);
    //((year%4==0&&year%100!=0)||(year%400==0))?:printf("%d is not leap year.",year);
    x=((year%4==0&&year%100!=0)||(year%400==0))?1:0;
    if(x==0)
    {
        printf("%d is not leap year",year);
    }
    else
    {
        printf("%d is leap year",year);
    }

    return 0;
}
