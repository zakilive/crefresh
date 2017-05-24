#include<stdio.h>
int main()
{
    int sume=0,sumo=0;
    int i,a[5];
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        printf("%d\t\n",a[i]);
        if(a[i]%2==0)
        {
            sume=sume+a[i];
        }
        if(a[i]%2!=0)
        {
            sumo=sumo+a[i];
        }
    }
    printf("sum of even values=%d\n",sume);
    printf("sum of odd values=%d",sumo);
    return 0;
}
