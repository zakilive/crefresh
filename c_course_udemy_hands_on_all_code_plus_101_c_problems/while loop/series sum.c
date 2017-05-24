#include<stdio.h>
int main(){
int i,f,N;
float sum;
printf("Enter value of N:");
scanf("%d",&N);
i=1,f=1;
sum=0;
while(i<=N)
{
    sum=sum+i/(float)f;
    i=i+1;
    f=f*i;
}
printf("Sum of %d series is %d",N,sum);
return 0;
}
