//Program to find largest of 2 integers
/* Zaki 2017 */
#include<stdio.h>
int main(){
int a,b;
printf("\n Enter 2 integers:");
scanf("%d %d",&a,&b);

if(a>b){
 printf("Largest is %d",a);
}
if(b>a){
    printf("Largest is %d",b);
}
return 0;
}
