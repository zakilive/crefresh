#include<stdio.h>
int main()
{
    int x[]={10,20,30};
    int *p;
    p=&x;
    int k;
    k=*p;
    printf("%d\n",k);
    k=++(*p);
    printf("%d\n",k);
    k=*p++;
    printf("%d %d\n",k,*p);
    k=*++p;
    printf("%d %d\n",k,*p);
  //  printf("%d\n",k);
}
