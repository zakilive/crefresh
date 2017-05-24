#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n;
    printf("how many integers:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n Exiting the program");
        exit(1); //abnormal situation exit(0) is normal situation
    }

    int i;
    for(i=0; i<n; i++)
    {
        printf("Next number: ");
        scanf("%d",&p[i]); //&(p+i)
    }

    printf("\ncontents of the array: ");
    for(i=0; i<n; i++)
    {
        printf("%4d",*(p+i));//as pointer is contiguous in array
    }

    free(p); //free up the memory to save it from the extra memory leak and wastage

    return 0;

}
