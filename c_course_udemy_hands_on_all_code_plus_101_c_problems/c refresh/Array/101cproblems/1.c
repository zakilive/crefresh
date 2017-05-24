#include<stdio.h>
int main()
{
    int ary[10],i,sum=0;
    printf("enter number:\n");
    for( i=0; i<10; i++)
    {
        scanf("%d",&ary[i]);
        sum=sum+ary[i];
    }
    printf("Sum=%d",sum);
    return 0;
}
