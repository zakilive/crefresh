#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    if(a>b){
        max=a;
    }else
    {
        max=b;
    }
    printf("maximum is %d\n",max);
    return 0;
}
