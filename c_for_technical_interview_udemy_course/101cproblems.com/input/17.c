#include<stdio.h>
int main(){
double numb;
scanf("%lf",&numb);
if(numb>=80 && numb<=100)
    printf("A+");
if(numb>=70 && numb<=79)
    printf("A");
if(numb>=60 && numb<=69)
    printf("A-");
if(numb>=50 && numb<=59)
    printf("B");
if(numb>=40 && numb<=49)
    printf("C");
if(numb>=33 && numb<=39)
    printf("D");
if(numb>=0 && numb<=32)
    printf("F");

return 0;
}
