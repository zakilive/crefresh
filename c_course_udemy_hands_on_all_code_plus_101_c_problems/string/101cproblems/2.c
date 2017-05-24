#include<stdio.h>
int main()
{
    char str[20];
    int i,j;
    printf("enter string here:");
    gets(str);
    for(i=0; str[i]!='\0'; i++);
    printf("reverse order:");
    for(j=i-1; j>=0; j--)
    {
        printf("%c",str[j]);
    }

    return 0;
}
