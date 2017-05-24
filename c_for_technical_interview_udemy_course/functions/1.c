#include<stdio.h>

//simple interest = (p*r*t)/100.00

double getSimpleInterest(double ,double ,double ); //function declaration //data type of the parameter dilei hoy

int main()
{
    double p,r,t,i;
    printf("enter principal: ");
    scanf("%lf",&p);
    printf("enter rate of interest: ");
    scanf("%lf",&r);
    printf("enter duration: ");
    scanf("%lf",&t);

    i=getSimpleInterest(p,r,t); //calling point
    printf("Total Interest: $%.2lf\n",i);

    i=getSimpleInterest(1000.0,5.0,2);
    printf("Total Interest: $%.2lf\n",i);
}

double getSimpleInterest(double p,double r,double time) //function definition/prototype/signature of the function after declaration
{
//block of this function
    double interest;
    interest=(p*r*time)/100.0;
    return interest;
}
