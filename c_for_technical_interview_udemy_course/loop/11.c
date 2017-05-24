#include<stdio.h>
int main()
{
    int i,count;
    char ch;
    for(count=1; count<=100; count++)
    {
        printf("count = %d\n",count);
        printf("Do you want to continue:?\n");
        scanf(" %c",&ch);
        if(ch=='y' || ch=='Y'){
            break;
        }
    }
    printf("Terminated at %d\n",count);


    return 0;
}
