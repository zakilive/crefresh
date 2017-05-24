#include<stdio.h>
#include<string.h>
int main()
{

    char first[90]="Chochlate Monty";
    char second[80]="Python";

    strcat(first," "); //space is concatening with the fies character strings content's //
    strcat(first, second);
    printf("%s\n",first);
    return 0;
}

