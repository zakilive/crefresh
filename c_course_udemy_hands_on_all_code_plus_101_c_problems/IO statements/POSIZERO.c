#include<stdio.h>
int main(){
int N;
printf("Enter number: ");
scanf("%d",&N);
if(N>0)
    printf("Given data %d is positive",N);
if(N<0)
    printf("Given data %d is negative",N);
if(N==0)
    printf("Given data %d is zero");

//return 0;
}
