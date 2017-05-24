//https://www.careercup.com/question?id=56794
#include<stdio.h>

int main()
{
int n,i,j;
int ctr=0;
scanf("%d",&n);
for(i=2;i<=n;i++)
{
for(j=i;j>1;j=j/10)
{
if((j%10)==2)
ctr++;
}
}
printf("The number of 2's is >> %d ",ctr);
return 0;
}
