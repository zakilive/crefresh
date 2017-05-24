#include<stdio.h>
#include<stdlib.h>
int main()
{

    char ch;
    ch=getchar();
    if(ch>='A' && ch<='Z'){
        ch=ch+32;
    printf("lowercase: %c",ch);
  }
    else if(ch>='a' && ch<='z'){
        ch=ch-32;
    printf("uppercase: %c",ch);
    }
    else{
        printf("it's not character");
    }
    return (EXIT_SUCCESS); //it's known as macro
}
