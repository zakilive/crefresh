#include<stdio.h>
#include<stdlib.h>
char ch[100];
char converter(char ch[])
{
    gets(ch);
    int t,l,i;
    for(i=0; ch[i]!='\0'; i++);

    for(t=0; t<i; t++)
    {
        if(ch[t]>='a' && ch[t]<='z')
               ch[t]=ch[t]-32;
//        if(islower(ch[t])){
//            ch[t]=toupper(ch[t]);
        }

}

int main()
{
    int i;
    converter(ch);

    for(i=0; ch[i]!='\0'; i++)
    {
        printf("%2c",ch[i]);
    }

    return 0;
}
