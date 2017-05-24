#include<stdio.h>
int main()
{
    int i;
    i=1;
    xyz:printf("\n%d",i);
    i++;
    goto xyz;

    return 0;
}
