/*
Always indent ant comment your code.

*/

#include<stdio.h>
int main(int argc, char **argv)
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=13 && age<=19){
        printf("You are a teen ager!");
    }
    else{
        printf("NO, you are not an teen ager.");
    }


    return 0;
}
