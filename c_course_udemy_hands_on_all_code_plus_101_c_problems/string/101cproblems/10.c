#include<stdio.h>
int main()
{

    char str[200];
    int i,j;
    gets(str);
    for(i=0;str[i]!='\0';i++);
    for(j=0;j<i;j++)
    {
        if(str[0]==str[i-1]){
            printf("Palindrome\n");
            break;
        }else{
            printf("Not Palindrome\n");
            break;
        }

    }
    printf("%d\n",i);
    printf("1st char = %c\n",str[0]);
    printf("last char = %c\n",str[i-1]);

    return 0;
}
