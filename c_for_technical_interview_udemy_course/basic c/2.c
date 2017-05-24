#include<stdio.h>
#include<stdlib.h>
int main()
{
    int var=45;
    printf("Var = %d\n",var); //%d is formmat specifier
    printf("var = %o\n",var); //octal format
    printf("var = %x\n",var); //hexadecimal


    int var1=056;
    printf("Var1 = %d\n",var1); //%d is formmat specifier
    printf("var1 = %o\n",var1); //octal format
    printf("var1 = %x\n",var1); //hexadecimal

    int var2=0xa; //hexadecimal value
    printf("Var2 = %d\n",var2); //%d is formmat specifier
    printf("var2 = %o\n",var2); //octal format
    printf("var2 = %x\n",var2); //hexadecimal

    return (EXIT_SUCCESS); //it's known as macro
}
