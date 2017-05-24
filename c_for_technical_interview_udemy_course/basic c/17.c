#include<stdio.h>
int main(){

int a=100,b=-70,i;
i=!(a>b);// when we use !a it is zero as any non zero value is true so !100= false=0 so 0>70 is false .. again !(a>b)
printf("%d\n",i);

return 0;
}
