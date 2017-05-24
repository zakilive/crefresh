#include<stdio.h>
long getFibbTerm(int t)
{
    if(t==0)
        return 0;
    if(t==1)
        return 1;
    return getFibbTerm(t-1)+getFibbTerm(t-2);
}
int main()
{
    int t;
       printf("%d\t",getFibbTerm(5));

    return 0;
}
