#include<stdio.h>
int main()
{
    int number;

    scanf("%d",&number);
    if(number%2==0)
    {
        printf("even\n");
    }else{
        printf("odd\n");
    }
    return 0;
}
