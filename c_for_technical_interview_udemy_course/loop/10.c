#include<stdio.h>
int main()
{
    int age;
    int hh;
    char ch;
    do{
        printf("Enter Age:\n");
        scanf("%d",&age);

        if(age>=13 && age<=19)
            printf("Teen\n");
        else
            printf("Not teen age\n");

        printf("do you want to continue:\n");
        scanf("%d",&hh);

    }while(hh == 1);


    return 0;
}
