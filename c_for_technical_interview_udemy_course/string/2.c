#include<stdio.h>
int main(){
char str[80];
printf("enter your name: ");
scanf("%[A-Za-z ]",str); //dave
printf("Welcome, %s\n ",str);
return 0;
}
