
#include<stdio.h>

void test(){
    extern int gVar;
    printf("gVar=%d\n",gVar);
    gVar=270;
}

int gVar;
int main()
{
    printf("gVar=%d\n",gVar);
    gVar=10;
    test();
    printf("gVar=%d\n",gVar);
    return 0;
}
