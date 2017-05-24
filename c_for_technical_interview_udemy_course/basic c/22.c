#include<stdio.h>
int main()
{

    double income,tax;
    scanf("%lf",&income);
    if(income<10000)
    {
        tax=0.0;
    }
    else if(income>=10000 && income<20000)
    {
        tax=income*.1;
    }
    else if(income>=20000 && income<50000)
    {
        tax=income*.2;
    }
    else if(income>=50000)
    {
        tax=income*0.25;
        tax=tax+tax*.1;
    } //more than one statement needs curly braces
    printf("Income tax= $ %.2lf",tax);


    return 0;
}
