#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch='A';
    printf("Character is %c\n",ch);
    printf("enter a character: ");
    char another;
    another=getchar();
//    scanf("%c",&another);
    printf("You have type: %c",another);

    return (EXIT_SUCCESS); //it's known as macro
}
