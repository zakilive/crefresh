#include<stdio.h>
int fun2(){
    int k;
    return k;

}
void fun1()
{
    int i;
    return i;
    fun2();
    int p=10;
    p=fun2();
    p++;
    printf("p=%d\n",p);

}
void fun3(){

}
int main()
{
    int i;
    int x[]= {10,20,30};
    int sum=0;
    fun1(); //calling function fun1

    for(i=0; i<3; i++)
    {
        sum=sum+x[i];
    }

    printf("Sum=%4d\n",sum);
    fun3();
    x[0]=x[0]+2;
    return 0;
}
