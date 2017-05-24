#include<stdio.h>
int main()
{
    char str[20],rev[20];
    int i,j,k,len;
    gets(str);
    for(i=0; str[i]!='\0'; i++);
    len=i-1;
    for(j=len,k=0; j>=0; j--,k++)
    {
        rev[j]=str[k];
    }
    for(i=0; i<len; i++)
    {

        if(rev[i]==str[i])
        {
            printf("Palindrome");
            break;
        }
        else
        {
            printf("Not Palindrome");
            break;
        }
    }

    return 0;

}
