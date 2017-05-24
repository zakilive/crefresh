#include<stdio.h>
int main()
{
    char str[]="Hello world";
    printf("Message is : %s\n",str);
    char str1[]="Hello Champa";
    strcpy(str,str1);
    printf("Message is : %s",str);
    return 0;
}

