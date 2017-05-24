#include<stdio.h>
int main(int argc, char **argv)
{
    if(argc==1)
    {
        printf("Insufficient Parameters");
        return 0;
    }

    double sum=0.0;
    int i;
    for(i=1;i<argc;i++)
    {
        sum=sum+atof(argv[i]);
    }
    printf("Sum is: %lf\n",sum);

    return 0;
}
