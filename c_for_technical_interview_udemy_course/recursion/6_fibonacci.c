#include<stdio.h>
long getFibbTerm(int t)
{
    if(t==1||t==2)
        return 1;
    return getFibbTerm(t-1)+getFibbTerm(t-2);
}
int main()
{
    int t;
    for(t=1; t<10; t++)
    {
        printf("%d\t",getFibbTerm(t));
    }
    return 0;
}
