#include<stdio.h>
int main()
{

    int x=300;
    char *k;
    int *p;
    k=(char*)&x;  //here it is 1 byte as it is char
    p=&x; //here it is 4 byte as it is int
    printf("%d %d\n",*p,*k);
    k=k+1;
    printf("%d %d\n",*p,*k);
    return 0;
}
