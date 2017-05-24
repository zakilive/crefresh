#include<stdio.h>
int main(){
int arr[10][10],i,j,m,n;

//Read order
printf("enter order of matrix:\n");
scanf("%d %d",&m,&n);

//read matrix
printf("\nEnter matrix of order %d %d:\n",m,n);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}

printf("Entered matrix:");
for(i=0;i<m;i++)
{
    printf("\n");
for(j=0;j<n;j++){
printf("%d\t",arr[i][j]);
}
}

return 0;
}
