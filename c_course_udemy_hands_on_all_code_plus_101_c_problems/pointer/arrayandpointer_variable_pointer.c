#include<stdio.h>
int main()
{
    int a[5],i,*p;
    printf("Enter 5 integer:\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Array elements are:\n");
    p=a;
    for(i=0;i<=4;i++)
    {

        printf("punga= %d %d %d %d\n",p[i],i[p],*(p+i),*(i+p));
    }
    return 0;
}
