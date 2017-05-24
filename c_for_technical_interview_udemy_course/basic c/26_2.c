#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    ((year%4==0&&year%100!=0)||(year%400==0))?printf("%d is leap year",year):printf("%d is not leap year.",year);

    return 0;
}
