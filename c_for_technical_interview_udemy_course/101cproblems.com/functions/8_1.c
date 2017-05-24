#include<stdio.h>

float areaOfFlag(float length)
{
    float width,area;
    width=(6*length)/10;
    area=length*width;
    return area;
}


int main(main)
{
    float length,area;
    printf("Enter the length of flag: ");
    scanf("%f",&length);
    area=areaOfFlag(length);
    printf("Area of flag is: %.2f\n",area);

}
