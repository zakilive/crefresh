#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter number of sales person:");
    scanf("%d",&r);
    printf("\nEnter sold number of items:");
    scanf("%d",&c);
    printf("\n\n");

//Take input from user
    printf("enter sales data:\n");
    double sale[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\nEnter data for sale peron no %d and item no %d:",i+1,j+1);
            scanf("%lf",&sale[i][j]);
        }
    }

//display data
    printf("\n\n");
    printf("\n\n");
    printf("Sales Data Is Here\n");

    double total=0.0;
    double comm;
    for(i=0; i<r; i++)
    {
        printf("---------------------------------\n");
        printf("Sales data for sales person %d\n",i+1);
        printf("---------------------------------\n");
        for(j=0; j<c; j++)
        {

            printf("\nItem %d = $%.2lf",j+1,sale[i][j]);
            total=total+sale[i][j];
            comm=total*.10;
        }
        printf("\nTotal sale: %.2lf\n",total);
        printf("Total comm for sale peron %d: %.2lf\n\n",i+1,comm);
        total=0.0;
    }


    return 0;
}
