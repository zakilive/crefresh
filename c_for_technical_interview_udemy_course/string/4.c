#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char  str[80];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    //for(i=0; str[i]!='\0'; i++);
    i=strlen(str);
    printf("Length of the string is: %d\n",i);
    return 0;
}
