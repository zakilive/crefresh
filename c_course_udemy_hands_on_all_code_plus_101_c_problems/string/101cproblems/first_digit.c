#include<stdio.h>
int main()
{
    int num,first;

    scanf("%d",&num);
    first=num;
    while(first>=10)
    {
        first=first/10;
    }
    printf("%d",first);

    return 0;
}
