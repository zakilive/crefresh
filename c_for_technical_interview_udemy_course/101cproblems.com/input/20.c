#include<stdio.h>
int main()
{
    int number;

    scanf("%d",&number);
    if(number%3==0 && number%5==0)
    {
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}
