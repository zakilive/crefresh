#include<stdio.h>
int main()
{

    void *vp;
    int x=100;
    vp=&x;
//printf("%d\n",*vp); //it will give error because it's void pointer
    printf("%d\n",*(int*)vp); //pointer type casting

    return 0;
}
