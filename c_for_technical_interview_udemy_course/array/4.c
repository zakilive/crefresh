#include<stdio.h>
int main()
{
    int n,i;
    printf("enter size of an array: ");
    scanf(" %d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("enter element to index %d: ",i);
        scanf(" %d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }


    return 0;
}
