#include<stdio.h>
int main()
{
    int a=5,b=6,i;
    //i=a++;  // ++a;
   // i=a++*b++;
    //i=++a*b++; //a=6 b=6
    i=++a*++b; //a=6 b=7 //42
    printf("a=%d, b=%d, i=%d\n",a,b,i);


    return 0;
}
