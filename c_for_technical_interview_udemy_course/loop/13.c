#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int k,i,t;
    t=time(NULL);
    srand(t);
    for(i=1; i<=10; i++)
    {
        k=rand()%1000;
        printf("%d\n",k);
    }
    return 0;
}
