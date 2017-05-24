
#include<stdio.h>
int main(int argc, char **argv) //default parameter
{
    printf("hello world\n");
    printf("ARGC=%d\n",argc);
    int i;
    for(i=0;i<argc;i++)
    {
        printf("argv[%d]=%s\n",i,argv[i]);
    }

    return 0;
}
