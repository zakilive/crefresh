#include<stdio.h>
int main()
{
    char str[100];
    int length=0,i=0;
    scanf("%s",str);

    while(1){
        if(str[i]=='\0')
        {
            break;

        }
        else{
            i++;
            length++;
        }
    }

printf("%d",length);

    return 0;
}
