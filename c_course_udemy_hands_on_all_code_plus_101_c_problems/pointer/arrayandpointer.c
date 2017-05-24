#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 integer:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Array elements are:\n");
    for(i=0;i<=4;i++)
    {
        printf("address=%X \n array=%d\n pointer=%d\n",a+i,a[i],*(a+i));
        printf("arrayulta=%d\n pointerulta=%d\n",i[a],*(i+a));
    }
    return 0;
}
