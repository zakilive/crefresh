#include<stdio.h>
#define size 5
int main()
{
int ss=5;
    float ary[ss];
    int i;
    for(i=0;i<5;i++)
    {
    printf("enter:");
    scanf("%f",&ary[i]);
    }

    for(i=0;i<5;i++)
    {
    printf("%f\t",ary[i]);
    }

    return 0;
}
