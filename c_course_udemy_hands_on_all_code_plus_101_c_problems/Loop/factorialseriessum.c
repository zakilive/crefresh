#include<stdio.h>
int main(){

int i, N, x,factorial;
float sum;
printf("Enter number of terms N:");
scanf("%d",&N);

for(sum=0,i=1,factorial=1,x=1;i<=N;i++,factorial=factorial*(x-1)*x){
    sum=sum+(x*x)/(float)factorial;
    x=x+2;
}
printf("%f",sum);
return 0;
}
