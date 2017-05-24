#include<stdio.h>
int main(){
    int num,lastdigit;
    printf("enter any number:");
    scanf("%d",&num);
    lastdigit=num%10;
    printf("lastdigit = %d",lastdigit);
    return 0;
}
