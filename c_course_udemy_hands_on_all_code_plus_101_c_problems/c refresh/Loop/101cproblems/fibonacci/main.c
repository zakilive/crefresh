#include <stdio.h>
#include <stdlib.h>
int main()
{
 int first=0,second=1,N,temp;
 printf("Put value greater than 1: ");
 scanf("%d",&N);
while(first<=N)
{
printf("%d\t",first);
temp=first;
first=second;
second=first+temp;
}
}
