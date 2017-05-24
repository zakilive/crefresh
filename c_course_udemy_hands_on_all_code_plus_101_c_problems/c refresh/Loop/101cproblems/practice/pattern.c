
#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<2;i++)
    {
        for(j=2;j>i+1;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i+1;k++)
        {
            printf("*");
        }
        for(l=0;l<i+1;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
