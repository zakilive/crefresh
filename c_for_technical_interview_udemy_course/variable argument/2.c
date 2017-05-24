//any number of arguments as parameter
//program e problem ase thikmoton run hoy nay
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include<stdlib.h>
double sum(char *format, ...) //... is ellipsis, it means variable number of arguments
{
    double s=0;
    va_list ap;
    va_start(ap, format);
    int i;
    for(i=0; i<=strlen(format); i++)
    {
        char ch=format[i];
        switch(ch)
        {
        case 'i':
            s+=va_arg(ap,int); //int is type information
            break;
        case 'd':
            s+=va_arg(ap,double);
            break;
        case 'f':
            s+=va_arg(ap,float);
            break;
        default:
            printf("invalid format found");
            exit(1);
        }
    }
       va_end(ap);
        return s;
}
    int main()
    {
        double k=sum("idfid",20,10.5,4.2f,90,10.9); //5 is fixed argument
        printf("sum = %lf\n",k);

        return 0;
    }
