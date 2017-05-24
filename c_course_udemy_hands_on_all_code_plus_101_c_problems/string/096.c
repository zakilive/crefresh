#include<stdio.h>
int main()
{

    char sourcestr1[20],sourcestr2[20];
    char deststr[40];

    int i,j;
    printf("here enter 1st string:");
    gets(sourcestr1);
    printf("enter 2nd string:");
    gets(sourcestr2);

    for(i=0;(deststr[i]=sourcestr1[i])!='\0';i++);
    for(j=0;(deststr[i]=sourcestr2[j])!='\0';i++,j++);
        printf("Concatnated string: %s\n",deststr);

    return 0;
}
