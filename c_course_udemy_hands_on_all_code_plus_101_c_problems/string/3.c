#include<stdio.h>
#include<stdlib.h>
int main(){

char str[20];
int i;
printf("\nEnter String: ");
for(i=0;(str[i]=getchar())!='\n';i++);
str[i]='\0';
printf("%d\n",i);
printf("entered string: %s",str);

return 0;
}
