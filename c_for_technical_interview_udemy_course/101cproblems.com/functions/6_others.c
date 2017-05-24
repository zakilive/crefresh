#include<stdio.h>
int maximum()
{
    int max,number1,number2,number3;
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the second number:");
    scanf("%d",&number2);
    printf("Enter the third number:");
    scanf("%d",&number3);
    if(number1>number2)
    {
        printf("the maximum number is : %d",number1);
    }
    else if(number2>number3)
    {
        printf("the maximum number is :%d",number2);
    }
    else
    {
        printf("the maximum number is :%d",number3);
    }

}
int main()
{
    maximum();

    return 0;
}
