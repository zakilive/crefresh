#include<stdio.h>
int main()
{
    int a[5]= {10,20,30,40,50};
    int b[5]= {10,20,30};
    int c[]= {10,20,443,45,43};
    int i;

    printf("A array elements:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
        printf("\n");
    }
    printf("B array elements:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t\n",b[i]);
    }
    printf("C array elements:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t\n",c[i]);
    }


    return 0;
}
