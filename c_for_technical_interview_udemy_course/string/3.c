#include<stdio.h>
int main(){
char str[80];
printf("enter your name: ");
scanf("%[^A]",str); //dave //this is going to accept anything except the new line
printf("Welcome, %s\n ",str);
return 0;
}
