#include<stdio.h>
int main()
{
    float A[5],B[5];
    float avgA,avgB,sumA=0,sumB=0;
    int i,j,counter=5;
    printf("Enter value here:\n");
    for(i=0; i<5; i++)
    {
        scanf("%f",&A[i]);
        sumA=sumA+A[i];
    }
    for(i=0;i<5;i++){
        scanf("%f",&B[i]);
        sumB=sumB+B[i];
        //counter++;
    }
    avgA=sumA/counter;
    avgB=sumB/counter;

    printf("%d",sumA);
    if(avgA>avgB)
    {
        printf("AVG: %d -> A",avgA);
    }else{
        printf("AVG: %d -> B",avgB);
    }

    return 0;
}
