//dynamically 2d array
#include<stdio.h>
#include<stdlib.h>
int **allocate(int nRows,int nCols)
{
    int **p;
    p=(int**)malloc(nRows*sizeof(int*));
    if(p==NULL)
        exit(0);
    int i,j;
    for(i=0; i<nRows; i++)
    {
        *(p+i)=(int*)malloc(nCols*sizeof(int));
    }
    return p;
}
void inputValues(int **p, int nRows, int nCols)
{
    int i,j;
    for(i=0; i<nRows; i++)
    {
        for(j=0; j<nCols; j++)
        {
            printf("Enter value for %d row %d col: ",i,j);
            scanf("%d",(*(p+i)+j));
        }
    }
}

void printValues(int **p, int nRows, int nCols)
{
    int i,j;
    for(i=0; i<nRows; i++)
    {
        for(j=0; j<nCols; j++)
        {
            printf("%6d",*(*(p+i)+j));
        }
        printf("\n");
    }
}

void deAllocate(int **p, int nRows, int nCols)
{
    int i,j;
    for(i=0; i<nRows; i++)
    {
        for(j=0; j<nCols; j++)
        {
            free(((p+i)+j));
        }

    }
}

int main()
{

    int **p;
    int nRows,nCols;
    printf("enter number of rows:");
    scanf("%d",&nRows);
    printf("enter number of cols:");
    scanf("%d",&nCols);
    p=allocate(nRows,nCols);
    inputValues(p,nRows,nCols);
    printValues(p,nRows,nCols);
    deAllocate(p,nRows,nCols);
    return 0;
}
