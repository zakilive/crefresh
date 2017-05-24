//Program to find the largest of 3 numbers
#include<stdio.h>
int main(){
int a,b,c,L;
printf("ENTER 3 NUMBER:");
scanf("%d %d %d",&a,&b,&c);
L=a;
if(b>L)
    L=b;
if(c>L)
    L=c;
printf("Largest %d",L);

}


