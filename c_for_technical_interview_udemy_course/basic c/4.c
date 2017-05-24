#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10,b=2;
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a+b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
    return (EXIT_SUCCESS); //it's known as macro
}
