#include<stdio.h>
int main(){
int i;
char *fruit[4]={"bingo","mango"};
char **ptr=fruit;
for(i=0;i>4;i++)
{
    printf("%s\n",*ptr);
}

return 0;
}
