#include<stdio.h>
int main()
{

    int *pX,*pY,x,y;
    x=100;
    y=200;
    pX=&x;
    pY=&y;

    printf("%d\n",*pX);
    printf("%d\n",*pY);


    return 0;
}
