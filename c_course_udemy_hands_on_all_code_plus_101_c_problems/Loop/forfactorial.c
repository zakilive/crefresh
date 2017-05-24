#include<stdio.h>
int main()
{
int N,i,factorial;
printf("Enter : ");
scanf("%d",&N);
for(i=1,factorial=1;i<=N;factorial=factorial*i,i++);
printf("Factorial = %d",factorial);
return 0;
}
