#include<stdio.h>
int main(){
int i,N,sum;
printf("Enter value of N:");
scanf("%d",&N);
for(i=1,sum=0;i<=N;sum=sum+i,i++);
printf("%d",sum);
return 0;
}
