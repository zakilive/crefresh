#include<stdio.h>

double add(double a,double b)
{
    double sum;
    sum = a+b;
    return sum;
}

double subtract(double a,double b)
{
    double sub;
    sub = a-b;
    return sub;
}

double multiply(double a,double b)
{
    double mul;
    mul = a*b;
    return mul;
}

double divide(double a,double b)
{
    double div;
    div = a/b;
    return div;
}


int main()
{
    int n;
    double a,b,total_add,total_sub,total_mul,total_div;
    while(1!=EOF)
    {
        printf("Enter two of the values:");
        scanf("%lf %lf",&a,&b);
        total_add=add(a,b);
        total_sub=subtract(a,b);
        total_mul=multiply(a,b);
        total_div=divide(a,b);
        printf("Add Answer: %.2lf\n",total_add);
        printf("Subtract Answer: %.2lf\n",total_sub);
        printf("Multiply Answer: %.2lf\n",total_mul);
        printf("Division Answer: %.2lf\n",total_div);
    }

    return 0;
}
