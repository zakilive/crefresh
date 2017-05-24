#include<stdio.h>
int main()
{
    int i,N,factorial;
    printf("Enter number:");
    scanf("%d",&N);
    i=1,factorial=1;
    do{
        factorial=factorial*i;
        i++;
    }while(i<=N);
    printf("Fcatorial = %d",factorial);

    return 0;
}
