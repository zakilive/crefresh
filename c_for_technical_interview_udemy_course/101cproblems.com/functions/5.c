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
    double a,b,total;
    while(1!=EOF)
    {
        printf("What you want to do ???\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
        printf("Type value:");
        scanf("%d",&n);
        if(n==1)
        {
            printf("Enter two of the values:");
            scanf("%lf %lf",&a,&b);
            total=add(a,b);
            printf("\nAnswer: %.2lf\n\n",total);
        }
        if(n==2)
        {
            printf("Enter two of the values:");
            scanf("%lf %lf",&a,&b);
            total=subtract(a,b);
            printf("\nAnswer: %.2lf\n\n",total);
        }
        if(n==3)
        {
            printf("Enter two of the values:");
            scanf("%lf %lf",&a,&b);
            total=multiply(a,b);
            printf("\nAnswer: %.2lf\n\n",total);
        }

        if(n==4)
        {
            printf("Enter two of the values:");
            scanf("%lf %lf",&a,&b);
            total=divide(a,b);
            printf("\nAnswer: %.2lf\n\n",total);
        }
    }
    return 0;
}
