
#include<stdio.h>
#include<string.h>
int main()
{

    char first[90]="abc";
    char second[80]="cat";

    int i;
    i=strcmp(first,second);
    if(i==0)
        printf("Both are equal\n");
    else if(i<0)
        printf("%s comes first",first);
    else if(i>0)
        printf("%s comes first",second);
    return 0;
}

