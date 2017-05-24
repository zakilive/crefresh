#include<stdio.h>
void printMsg(unsigned int n)
{
    if(n==0)
        return; //it is outing from this function and going back to callers return 0
    printf("Hello World %d\n",n);
    n--;
    printMsg(n); //recursively calling printMsg

}
int main()
{
    printMsg(5); //call to printMsg function
    return 0;
}
