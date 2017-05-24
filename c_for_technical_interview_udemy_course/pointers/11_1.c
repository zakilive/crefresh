#include<stdio.h>
int main()
{
    const double PI=3.14;
    int x[]={1,5,3};
   // x++;
    //int *const p=x;
   int const * p=x;
   // p=x;
  //  printf("%d\n",p);
    p++; //this is illegal
    *p++; //this is legal
    printf("%d\n",p);
    x[0]++;
printf("%d\n",x[1]++);

    return 0;
}
