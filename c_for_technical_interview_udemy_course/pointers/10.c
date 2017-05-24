#include<stdio.h>
void toggleChar(char *sptr){

    int i;
    for(i=0;*(sptr+i)!='\0';i++)
    {
        if(*(sptr+i)>='a' && *(sptr+i)<='z')
            *(sptr+i)=*(sptr+i)-32;
        else if(*(sptr+i)>='A'&& sptr[i]<='Z')
            *(sptr+i)=*(sptr+i)+32;
    }

}
int main()
{
    char str[2000];
    scanf("%[^\n]",str);
    toggleChar(str);
    printf("%s",str);

    return 0;
}
