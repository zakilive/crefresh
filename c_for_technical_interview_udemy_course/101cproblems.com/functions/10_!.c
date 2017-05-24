
#include<stdio.h>
void toUpperCase(char ch)
{
    if(ch>='a' && ch<='z')
            ch=ch-32;
    printf("%c\n",ch);


}

int main()
{
    char t,cha;
    scanf("%c",&cha);
    toUpperCase(cha);

    return 0;
}
