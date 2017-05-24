#include<stdio.h>
char ch[100];
char converter()
{

    gets(ch);
    int t,l,i;
    for(i=0; ch[i]!='\0'; i++);
    //printf("%d",i);
    for(t=0; t<i; t++)
    {
        if(ch[t]>='a' || ch[t]<='z')
            ch[t]=ch[t]-32;
    }
    for(t=0; t<i; t++)
    {
        printf("%2c",ch[t]);
    }

}

int main()
{
    int l,i;
    converter();

    //for(i=0; ch!='\0'; i++);
    //printf("%d",i);
    return 0;
}
