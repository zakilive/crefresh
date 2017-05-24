#include<stdio.h>
int main()
{
    int* p[3];
    int **k;
    k=p;
    int x[]={1,2,3};
    int y[]={10,20,30};
    int z[]={5,6,7};

    p[0]=x;
    p[1]=y;
    p[2]=z;

    printf("%d\n",**p);
    printf("%d\n",*(*(p+1)+2));
    return 0;
}
