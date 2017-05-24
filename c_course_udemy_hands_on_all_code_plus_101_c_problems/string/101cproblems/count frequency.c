#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char string[MAX_SIZE];
    int i,j,len;
    int frequency[26];
    gets(string);
    for(j=0;string[j]!='\0';j++);
   // printf("%d",i);
    for(i=0;i<26;i++)
    {
        frequency[i]=0;
    }

    for(i=0;i<j;i++)
    {
        if(string[i]>='a' && string[i]<='z'){
            frequency[string[i]-97]++;
        }
        else if(string[i]>='A' && string[i]<='Z'){
            frequency[string[i]-65]++;
        }
    }

    for(i=0;i<25;i++)
    {
        if(frequency[i]!=0){
            printf("%c(%d)\t",(i+97),frequency[i]);
        }
    }


    return 0;
}
