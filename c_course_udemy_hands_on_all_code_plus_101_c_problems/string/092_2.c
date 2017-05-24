#include<stdio.h>
#include<stdlib.h>
int main(){
char str[20];
int i;
printf("enter string: ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
  putchar(str[i]);

return 0;
}
