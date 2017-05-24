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

    int new_no=n+3;
    p=(int*)realloc(p,new_no*sizeof(int)); //existing p //grow it or shrink it
    if(p==NULL) //program does not fail in runtime
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    *(p+n)=10;
    *(p+n+1)=20;
    *(p+n+2)=30;

    printf("\n New Content of the Array");
    for(i=0;i<new_no;i++)
    {
        printf("%4d",*(p+i));
    }

    free(p); //free up the memory to save it from the extra memory leak and wastage

    return 0;

}
