#include<stdio.h>
int main()
{
    char *str="bangladesh";
    printf("%c %c %c",*str,*(str+3), *(str+4));

    return 0;
}
