#include<stdio.h>
int main(){

int i,j,m,n;
m=5,n=10;
for(i=1;i<=m;i++){
    for(j=1;j<=n;j++)
{
    printf("%d x %d = %d\n",i,j,i*j);
}
}
return 0;
}
