#include<stdio.h>
int main()
{
    char sstr[20];
    int i;
    printf("Enter string:");
    gets(sstr);
    for(i=0; sstr[i]!='\0'; i++);
    printf("length of the string:%d",i);
    return 0;
}
