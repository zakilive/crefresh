#include<stdio.h>
typedef enum
{
    SUN,MON,TUES,WED=70,THURS=80,FRI,SAT
} days_of_week;
typedef enum
{
    FALSE,TRUE
}Boolean;

Boolean isEven(int n){
    if(n%2==0)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    days_of_week day=FRI;
    if(day==FRI || day==SAT) //much comprehensive
        printf("Holiday\n");
    else
        printf("Not holiday\n");

    printf("Value of tues is: %d\n",TUES);



    return 0;
}
