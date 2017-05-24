#include<stdio.h>
void doWork(int a,int b,int c,int *p,int *q){
    *p=a+b+c;//sum is posted to the original location;
    if(a>b & a>c)
        *q=a;
    else if(b>a && b>c)
        *q=b;
    else
        *q=c; //*q is auto returning to the calling variable
}
int main()
{
int x=10,y=20,z=30,sum,max;
doWork(10,20,30,&sum,&max);
printf("Sum=%d\ Max=%d \n",sum,max);


}
