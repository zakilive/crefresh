#include<stdio.h>
int main(){

    int a,b,c,max;
    int x[100];

    x[0]=10;

    printf("First element: %d\n",x[0]);

    x[99]=2;

    printf("Last element: %d\n",x[99]);

    x[1]=x[0]+x[99];
    printf("2nd element in array (sum): %d",x[1]);


return 0;
}
