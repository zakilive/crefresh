#include<stdio.h>
int main(){

int ary[10],i;
printf("\nEnter 10 integers array elements:\n");
for(i=0;i<10;i++){
    scanf("%d",ary[i]);
}

printf("\nEntered  array elements are:");
for(i=0;i<10;i++)
{
    printf("\n %d",ary[i]);
}
return 0;
}
