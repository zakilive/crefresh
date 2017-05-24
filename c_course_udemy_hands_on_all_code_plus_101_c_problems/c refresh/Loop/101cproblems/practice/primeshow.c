#include<stdio.h>
int main()
{
    int i,j,count=0,N;
    while(1){
    printf("Enter N:\n");
    scanf("%d",&N);
    printf("prime = ");
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d\t",i);
        count=0;
    }
    printf("\n");
    }
    return 0;
}
