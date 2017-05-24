#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i;
    printf("\nEnter string: ");
    gets(str);
    i=strlen(str);
    printf("%d",i);
    return 0;
}

