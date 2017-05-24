#include<stdio.h>
int main()
{
    int i=0,j=0;
   // j=i++ + ++j;//
    j= i++ + ++i;
    printf("%d %d",i,j); //i=        //1, 1
    return 0;
}
