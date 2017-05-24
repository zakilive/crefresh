#include<stdio.h>
int main()
{
    int i,classes[6],sum=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",(classes+i));
        sum=sum+*(classes+i);//* means value of a pointer
    }
    printf("%d",sum);


}
