#include<stdio.h>
int main(){
int N,R;
printf("Enter the number to reverse: ");
scanf("\n%d",&N);
R=0;
while(N!=0)
{
    R=R*10+N%10;
    N=N/10;
}
printf("Reverse: %d",R);

return 0;
}
