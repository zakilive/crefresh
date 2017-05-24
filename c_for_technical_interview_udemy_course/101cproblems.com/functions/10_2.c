//http://101cproblems.com/problem-63/
#include<stdio.h>
char ch[1000];
char convert(char ch[])
{
    gets(ch);
    int l,i;
    l=strlen(ch);
    for(i=0; i<l; i++)
    {
        if(islower(ch[i]))
            ch[i]=toupper(ch[i]);
    }
}
int main()
{
    char add[1000];
    convert(ch);
    int len;
    len=strlen(ch);
    int i;
    for(i=0; i<len; i++)
        printf("%c",ch[i]);
    return 0;
}
