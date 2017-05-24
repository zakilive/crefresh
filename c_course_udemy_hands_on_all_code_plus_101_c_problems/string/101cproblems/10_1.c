#include<stdio.h>
int main()
{

    char str[200];
    int i,j,flag=0,lngth;
    gets(str);
    for(i=0; str[i]!='\0'; i++);
    lngth=i-1;
    for(j=0; j<lngth/2; j++)
    {
        if(str[j]==str[lngth-j])
        {
            printf("Palindrome\n");
            break;
        }
        else
        {
            printf("Not Palindrome\n");
            break;
        }
    }


    return 0;
}
