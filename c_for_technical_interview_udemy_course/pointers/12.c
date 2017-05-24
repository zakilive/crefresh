#include<stdio.h>
int main()
{
    int x[]= {10,20,30};
    int *p,k;
    p=x;
    printf("%lu\n",p);
    printf("%p\n",x);
    k=++(*p);
    printf("k=%d *p=%d p=%lu p=%p x[0]=%d x[1]=%d x[2]=%d\n",k,*p,p,p,x[0],x[1],x[2]);
    k=*++p;
    printf("k=%d *p=%d p=%lu p=%p x[0]=%d x[1]=%d x[2]=%d\n",k,*p,p,p,x[0],x[1],x[2]);
    k=*p++;
    printf("k=%d *p=%d p=%lu p=%p x[0]=%d x[1]=%d x[3]=%d\n",k,*p,p,p,x[0],x[1],x[2]);
}
