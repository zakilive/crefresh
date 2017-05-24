#include<stdio.h>
int findMax(int a,int b,int c)
{
    int max;
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else if(c>=a && c>=b)
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
