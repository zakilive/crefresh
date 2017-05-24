#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("enter string here:");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("length of the string=%d",i);

    return 0;
}
