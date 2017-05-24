#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    int n;
    printf("enter no of elements:");
    scanf("%d", &n);
    int x[n];
    int i;

    int t=time(NULL);
    srand(t);
    for(i=0; i<n; i++)
    {
        x[i]=rand()%100;
    }
    int sum=0;
    printf("content of the array:\n");
    for(i=0; i<n; i++)
    {
        printf("%3d\t",x[i]);
        sum=sum+x[i];
    }
    printf("\nsum = %d",sum);
    double avg=(double)sum/n;
    printf("\navg = %4.2lf",avg);
    return 0;
}
