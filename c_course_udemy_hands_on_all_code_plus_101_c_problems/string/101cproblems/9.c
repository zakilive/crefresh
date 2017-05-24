#include<stdio.h>
int main()
{
    int i,count=0;
    char str[10000];
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' '||str[i]==','||str[i]=='\t'||str[i]=='.')
        {
            count++;
        }
    }
    count=count+1;
    printf("%d",count);

    return 0;
}
