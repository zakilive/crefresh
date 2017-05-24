#include<stdio.h>
void test(){
    extern int gvar;
    printf("gvar=%d",gvar);
    gvar=20;
}
int gvar;
int main(){

//extern int gvar;
printf("gvar=%d\n",gvar);
gvar=10;
test();
printf("gvar = %d",gvar);
return 0;
}
