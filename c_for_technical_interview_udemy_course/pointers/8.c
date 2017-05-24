#include<stdio.h>
int main()
{
    int i;
    int x[]= {10,20,30,40,50};
    printf("%p %p\n",x+1,&x[1]); //base address is always pointing to the same location
    for(i=0; i<5; i++)
    {
        //printf("%4d ",*(x+i));
        //  printf("%4d ",x[i]); //i[x], subscription script is always converted to *(x+i)
        //so x[i] == *(x+i)
        scanf("%d",(x+i));
//    printf("%d\n",x[i]);
        printf("%d\n",*(x+i));
    }
    printf("\n");

    return 0;
}
