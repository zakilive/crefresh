#include<stdio.h>
int main(){
char *str="Hello";
printf("%s\n",str);
*(str+1)='O';
printf("%s\n",str);
return 0;
}
