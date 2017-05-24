/*

Zaki Live
pointer important topic

*/
#include<stdio.h>
int main()
{

    int *p,*q;
    int x=100;
    p=&x; //p is addresing to the x
    printf("%d\n",*p); //it is pointing to the value of x
    *p=*p+1;    //value of x is increasing
    printf("%d\n",*p); //value of x is increased and showing  through p

    int **k; //it is pointer to pointer that means it is linking to x through  p
    //lets see how it works
    k=&p;   //it is addresing to p
    p=200;  //value of p
    // printf("%d\n",*k); //value of p is printing through k
    **k=**k+1;
    printf("%d\n",x); //value of x is printing through k



    return 0;
}
