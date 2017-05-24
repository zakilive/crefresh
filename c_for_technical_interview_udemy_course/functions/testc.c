#include<stdio.h>
#include "c_test/headers/mymath.h"
int main()
{
double interest;
interest=getSimpleInterest(100.00,99.32,4.43);
printf("interest is: %lf",interest);
}
