#include<stdio.h>
int main()
{
    int i,j,N,isPrime;
    while(1){
    printf("enter value:\n");
    scanf("%d",&N);
    for(i=2; i<=N; i++)
    {
        isPrime=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0){
                isPrime=1;
            }
        }
        if(isPrime==0 && N!=1)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
}
   return 0;
}
