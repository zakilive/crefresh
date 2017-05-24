#include<stdio.h>
#include<stdlib.h>

int main()
{
char str[20];
int i;
printf("entered string:");
//we are not using
//scanf("");
for(i=0;(str[i]=getchar())!='\n';i++);
str[i]='\0';
printf("%s",str);
return 0;
}

