#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch='A';
    printf("%d - %c\n",ch,ch);
    int i=65;
    printf("%c\n",i);
    for(i=65;i<=90;i++)
    {
        printf("%d - %c\n",i,i);
    }

    return (EXIT_SUCCESS); //it's known as macro
}
