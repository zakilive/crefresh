#include<stdio.h>
int main()
{
    int N,i;
    float sum;
    printf("Enter N:");
    scanf("%d",&N);
    sum=0;
    i=1;
    do{
            sum=sum+1/(float)i;
            i++;
    }while(i<=N);
    printf("Sum of series: %f",sum);
    return 0;
}
