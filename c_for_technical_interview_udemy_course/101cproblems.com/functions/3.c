#include<stdio.h>

int func(int a)
{
    if(a%2==0)
        return 1;
    return 0;
}


int main()
{
    int status,a;
    while(scanf("%d",&a)!=EOF)
    {
        status=func(a);
        if(status==1)
            printf("EVEN\n");
        else
            printf("ODD\n");
    }
    return 0;
}
