#include<stdio.h>
void main()
{
    Display();
    Display();
    Display();
}

void Display(){
static int x=1;
x=x+5;
printf("%d\n",x);
}
