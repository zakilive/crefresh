#include<stdio.h>
int main()
{
    char str[80];
    scanf("%[^\n]",&str);

    int i,countAlpha=0,countSpace=0;
    for(i=0;str[i]!='\0';i++)
    {

        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            countAlpha=countAlpha+1;
        }else if(str[i]==' ')
        {
            countSpace=countSpace+1;
        }
    }
    printf("Alphabet: %d\n",countAlpha);
    printf("Space: %d\n",countSpace);
    return 0;
}
