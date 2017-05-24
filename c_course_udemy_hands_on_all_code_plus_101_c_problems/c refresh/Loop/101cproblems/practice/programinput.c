#include<stdio.h>
int main()
{
    int i,n;
    for(;;)//while(1)
    {
        printf("enter no:");
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        if(n>-32)
        {
            for(i=n; i>=-32; i--)
                printf("%d\n",i);
        }
        else if(n<-32)
        {
            for(i=n; i<=-32; i++)
                printf("%d\n",i);
        }
    }



    return 0;
}

