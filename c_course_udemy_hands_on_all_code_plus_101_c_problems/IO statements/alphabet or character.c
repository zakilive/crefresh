//program to check if given character is alphabet or not
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter single alphabet: ");
    ch=getchar();

    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
        printf("Given character is an alphabet");
    else
        printf("Given character is not an alphabet");


    return 0;
}
