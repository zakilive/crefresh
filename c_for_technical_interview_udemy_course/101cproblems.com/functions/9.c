/*

here we are using the formula for ratio is that length/width=10/6
so length*6=width*10 => width=length*6/10;
*/
#include<stdio.h>

float areaflag(float len)
{
    float width;
    width=(len*6)/10;
    float  area=len*width;
    return area;
}

int main()
{
    float n;
    scanf("%f",&n);
    n=areaflag(n);
    printf("area=%.2f",n);
    return 0;
}
