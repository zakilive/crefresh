//any number of arguments as parameter
#include<stdio.h>
#include<stdarg.h>
int sum(int count, ...) //... is ellipsis, it means variable number of arguments
{
    int s=0;
    va_list ap;
    va_start(ap, count);
    int i;
    for(i=1;i<=count;i++){
        s=s+va_arg(ap,int); //int is type information
    }
    va_end(ap);
    return s;
}

int main()
{
    int k=sum(5,20,10,4,2,10); //5 is fixed argument
    printf("sum = %d\n",k);
    return 0;
}
