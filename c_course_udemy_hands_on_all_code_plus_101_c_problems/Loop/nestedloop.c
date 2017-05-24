#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++){
        printf("Hi %d\n",i); //outer loop statement
        for(j=1;j<=5;j++){
            printf("%d %d\n",i,j); //inner loop statement
        }
        printf("Bye %d\n",i); //outer loop statement
    }
    return 0;
}
