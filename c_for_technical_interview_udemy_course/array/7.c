#include<stdio.h>
int main()
{
    int x[4][3];
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            x[i][j]=i*j;
        }
    }
    //printf("%d",i);
    printf("content of the 2d array:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%3d",x[i][j]); //format specifier width selector
        }
        printf("\n");
    }

    return 0;
}
