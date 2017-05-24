#include<stdio.h>
#include<stdlib.h>
int main()
{

    char sourcestr[20],deststr[20];
    int i;
    printf("Enter your string:");
    gets(sourcestr);

    //for(i=0; (deststr[i]=sourcestr[i])!='\0';i++);
//    strcpy(deststr,sourcestr);
    printf("Copied string : %s",deststr);



    return 0;
}
