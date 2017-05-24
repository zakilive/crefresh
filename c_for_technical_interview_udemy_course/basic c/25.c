#include<stdio.h>
int main()
{
 int a=20,b=50,c=40,m;
//    if(a>b && a>c)
//        m=a;
//    else if(b>c)
//        m=b;
//    else
//        m=c;

    m=(a>b && a>c)?a:(b>c?b:c);
  printf("%d\n",m);

    return 0;
}
