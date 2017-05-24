
#include<stdio.h>
void test1(){
    auto int k;
    printf("k=%d\n",k);
    k=20;
    printf("k=%d\n",k);
}

void test(){
    static int var; //auto 0 hoye jabe
    printf("var=%d\n",var);
    var=var+1;
    printf("var=%d\n",var);
}

int main(){

test1();
test();
test();
test();
return 0;
}
