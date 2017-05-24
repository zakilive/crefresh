//Program to find the largest of 3 numbers
#include<stdio.h>
int main(){
int a,b,c;
printf("ENTER 3 NUMBER:");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
    printf("Largest is %d",a);
if(b>a && b>c)
    printf("\nLargest is %d",b);
if(c>a && c>b)
    printf("\nLargest is %d",c);
//return 0;
}

