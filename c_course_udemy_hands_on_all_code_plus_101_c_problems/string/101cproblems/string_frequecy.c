#include<stdio.h>
int main()
{
    int i,length=0;
    char str[200],arr[200];
    gets(str);
    for(i=0; i<=122; i++)
    {
        arr[i]=0;
    }
    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    for(i=0; i<length; i++)
    {
        arr[str[i]]++;
    }
    for(i=0; i<=122; i++)
    {
        if(arr[i]!=0)
        {
            printf("%c(%d)",i,arr[i]);
        }
    }
    return 0;
}
