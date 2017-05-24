#include<stdio.h>
int findMax(int a,int b,int c)
{
    int max;
    if(a>b && a>c)
        max=a;
    else if(b>a && b>c)
        max=b;
    else if(c>a && c>b)
        max=c;
    else
        max=a;
    return max;
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
