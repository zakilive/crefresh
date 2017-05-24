//program to check given year is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year%4==0)
        printf("Givern year %d is leap year",year);
    else
        printf("Givern year %d is not leap year",year);
    return 0;
}
