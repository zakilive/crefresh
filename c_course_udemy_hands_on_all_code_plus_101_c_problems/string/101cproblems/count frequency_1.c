#include<stdio.h>
int main()
{
    char str[300],ch;
    int i,frequency=0;
    printf("enter string:");
    gets(str);
    printf("enter character:");
    scanf("%c",&ch);

    for(i=0; str[i]!='\0'; i++)
    {
        if(ch==str[i])
        {
            frequency++;
        }

    }
    printf("%d",frequency);

    return 0;
}
