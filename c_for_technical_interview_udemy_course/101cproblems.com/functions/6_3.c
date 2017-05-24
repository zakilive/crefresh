#include<stdio.h>
int add(int c)
{
    int max;
    int i,j;
    int ara[3];
    for(i=0; i<3; i++){
        scanf("%d",&ara[i]);
    }
    max=ara[0];
    for(i=0; i<3; i++)
    {
        if(ara[i]>=max) //max<=ara[i]
        {
            max=ara[i];
        }
    }
    //c=max;
    return max;
}
int main()
{
    int ans;
    int c;
    ans=add(c);
    printf("%d\n",ans);
    return 0;
}
