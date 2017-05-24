#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Enter 2 integers");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("Largest is %d",a);
    else
        printf("Largest is %d",b);

    return 0;
}

