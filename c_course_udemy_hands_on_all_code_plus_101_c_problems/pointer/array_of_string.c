
#include<stdio.h>
int main(){

char *fruitnames[4]={"Mango","Jack fruit","banana","Litchi"};
char *(*ptr)[4]=&fruitnames;

for(i=0;i<4;i++)
    printf("%s\n")


return 0;
}
