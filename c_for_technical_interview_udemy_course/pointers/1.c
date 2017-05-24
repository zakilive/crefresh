#include<stdio.h>
int main()
{
    int var=5;
    int* p; //p is integer pointer which is addresss of some variable
    printf("%p\n",&var); //address of var
    p=&var;
    printf("%d\n",var); //5
    printf("%d\n",*p); //5
    *p=12;
    printf("%d\n",var); //12
    *p=*p+1;
    printf("%d\n",var); //13
    printf("%d\n",&var);
    printf("%d\n",p); //address of p/var
    p=p+1;
    printf("%d\n",p); //4bytes of address increased
     printf("%d\n",&var); //eta constant p er ta change hobe cz oita alga :p
    return 0;
}
