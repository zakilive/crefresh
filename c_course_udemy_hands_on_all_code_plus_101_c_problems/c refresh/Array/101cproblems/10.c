#include <stdio.h>
int main()
{
    int A[5],B[5],AB[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&B[i]);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        AB[i]=A[i]+B[i];
        printf("%d ",AB[i]);
    }
    printf("\n");

    return 0;
}
