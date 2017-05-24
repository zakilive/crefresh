#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter single alphabet: ");
    ch=getchar();
    if(ch>=65 && ch<=90)
        printf("\n Given alphabet is upper case letter");
    else
        printf("\n Given alphabet is in lowercase letter");
    return 0;
}
