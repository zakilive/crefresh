#include<stdio.h>
int main()
{

    int i;
    double *pA;
    double a[]={5,10,15,20,25};
    pA=&a;
    for(i=0;i<5;i++)
    {
        printf("%.2lf\n",*(pA+i));
    }

    return 0;

}
