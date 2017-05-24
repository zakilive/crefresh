#include<stdio.h>
double dollarToBDT(double usd)
{
    usd=usd*78.55;
    return usd;
}

int main()
{
    double tk, usdollar;
 while(printf("Type USD:")&&scanf("%lf",&usdollar)!=EOF){

    tk=dollarToBDT(usdollar);
    printf("%.2lf USD = %.2lf TK\n",usdollar,tk);

}
    return 0;
}
