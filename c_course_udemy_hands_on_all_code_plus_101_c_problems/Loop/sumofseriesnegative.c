#include<stdio.h>
int main()
{
    int i,N,sign;
    float sum;
    printf("Enter value of N:");
    scanf("%d",&N);
    sum=0;
    sign=1;
    do{
        sum=sum+(1.0/(float)i)*sign;
        i++;
        sign=sign*(-1);
    }while(i<=N);
    printf("Sum=%f",sum);

    return 0;
}
