//Program to find largest of 2 integers
/* Zaki 2017 */
#include<stdio.h>
int main(){
int N;
printf("Enter number: ");
scanf("%d",&N);
if(N%2==0)
    printf("Given number is even");
if(N%2!=0)
    printf("Given number is odd");
return 0;
}
