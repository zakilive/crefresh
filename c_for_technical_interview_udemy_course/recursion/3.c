#include<stdio.h>
void printNo(unsigned int n)
{
    if(n==0)
        return; //it is outing from this function and going back to callers return 0
    printf("Hello World %d\n",n);
    n--;
    printNo(n); //recursively calling printMsg

}
int main()
{
    printNo(5); //call to printMsg function
    return 0;
}
