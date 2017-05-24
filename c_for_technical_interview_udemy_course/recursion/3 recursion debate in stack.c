#include<stdio.h>
void printNo(unsigned int n)
{
    if(n==0)
        return; //it is outing from this function and going back to callers return 0

    printNo(n-1);
   printf(" %d\n",n);
     //recursively calling printMsg

}
int main()
{
    printNo(5); //call to printMsg function
    return 0;
}
