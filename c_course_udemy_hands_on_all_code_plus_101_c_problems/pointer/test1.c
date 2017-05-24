#include<stdio.h>

int main(){

   int a[]={5,10,15,20,25};

   int *pA;

   pA = &a;

   int i=1;
   printf("%d ", *(pA+i));

return 0;

}
