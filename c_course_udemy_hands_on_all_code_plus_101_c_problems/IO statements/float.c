#include<stdio.h>
int main(){

float N,T;
printf("Enter data: ");
scanf("%f",&N);
T=(int)N;
if(N==T)
    printf("Given data is integer");
else
    printf("Given data is floating point data");
return 0;
}
