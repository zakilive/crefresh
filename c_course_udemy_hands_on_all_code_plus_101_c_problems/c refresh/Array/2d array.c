
#include<stdio.h>
int main(){

int arr[2][3],i,j;
printf("Enter matrix of order 2x3\n");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
}

//displaying matrix
printf("Entered Matrix:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf(" %d ",arr[i][j]);
    }
printf("\n");
}


}
