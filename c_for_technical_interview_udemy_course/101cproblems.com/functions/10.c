
#include<stdio.h>
char toUpperCase(char ch)
{
    if(ch>='a' && ch<='z')
        ch=ch-32;
    return ch;

}

int main()
{
    char t,cha;
    scanf("%c",&cha);
    t=toUpperCase(cha);
    printf("%c\n",t);

    return 0;
}
