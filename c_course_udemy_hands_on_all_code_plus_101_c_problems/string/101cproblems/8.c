#include<stdio.h>
int main()
{
    char str[200];
    int i,j;
    gets(str);
    for(i=0; str[i]!='\0'; i++);
    if(str[0]>='a' && str[0]<='z')
    {
        str[0]=str[0]-32;
    }
    putchar(str[0]);
    for(j=1; j<i; j++)
    {
        if(str[j]>='A' && str[j]<='Z')
        {
            str[j]=str[j]+32;
        }
        putchar(str[j]);
    }

    return 0;
}
