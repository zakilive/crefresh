#include<stdio.h>
int findMax(int a,int b,int c)
{
    int max;
    if(a>b)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        int t=findMax(a,b,c);
        printf("%d\n",t);
    }
    return 0;
}
