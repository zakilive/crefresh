#include<stdio.h>
int main()
{
    int a[5],i,sum=0,count=0,avg;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>100)
        {
            count++;
            sum=sum+a[i];
        }
    }
    avg=sum/count;
    printf("avg=%d",avg);
    return 0;
}
