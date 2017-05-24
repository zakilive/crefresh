#include<stdio.h>
int main()
{
    int ary[7]={-99,45,100,37,89,-327,245};
    int  i,max=0;
    for(i=0;i<7;i++)
    {
        if(ary[i]>max)
        {
            max=ary[i];
        }
    }
    printf("%d\n",max);

    return 0;
}
