#include<stdio.h>
int main()
{
    int A[5],B[5],AB[5],i;

    printf("Enter value for A[] and B[]:\n");
    for(i=0;i<5;i++){
        scanf("%d %d",&A[i],&B[i]);
        AB[i]=A[i]+B[i];
    }


    for(i=0;i<5;i++){
        printf("%d\t",AB[i]);
    }



    return 0;
}
