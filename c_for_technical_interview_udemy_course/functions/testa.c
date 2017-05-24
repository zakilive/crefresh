#include<stdio.h>
//int main()
//{
//    int num,first;
//    int i,n;
//    int ary[10];
//    scanf("%d",&n);
//
//    while(n>0)
//    {
//       n=n%10;
//    for(i=0;i<n;i++){
//           ary[i]=n;
//        }
//       n=n/10;
//    }
//
//    for(i=0;i<n;i++){
//    printf("%d\n",ary[i]);
//    }
//    return 0;
//}
char *getDigit(int number){
    char digits[2000000];
    int i=0,d;
    while(number>0)
    {
        d=number%10;
        digits[i]=d;
        //printf("%s",digits);
        number=number/10;
        ++i;
    }
    digits[i]='\0';
    return digits;
}

int main()
{
    int number;
    scanf("%d",&number);
    char val=getDigit(number);
    printf("%d",val[0]);
//    int t,sum=0;
//    for(t=i-1; t>=0; t--)
//    {
//        printf("%d\t",digits[t]);
//        sum=sum+digits[t];
//    }
//    printf("\n Sum of all digits = %d",sum);

    return 0;
}


