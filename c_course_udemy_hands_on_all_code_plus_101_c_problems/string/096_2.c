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

    strcpy(deststr,sourcestr1);
    strcat(deststr,sourcestr2);

    printf("Concatanted string: %s\n",deststr);

    return 0;
}
