#include<stdio.h>
int main()
{
    int i,sum,count;
    sum=0,count=0;
    float avg;
    for(i=10;i<=500;i++)
    {
        if(i%3==0 && i%5==0 && i%12==0)
        {
            sum=sum+i;
            count++;
        }
    }
    avg=sum/count;
    printf("avg=%.2f sum=%d count = %d",avg,sum,count);
    return 0;
}
