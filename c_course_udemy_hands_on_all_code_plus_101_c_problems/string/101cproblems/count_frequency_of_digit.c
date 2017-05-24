//program to cound frequency of digits in a number
#include<stdio.h>
#define BASE 10
int main()
{

    long long num,n;
    int i, lastdigit;
    int freq[BASE];

    printf("Enter number:");
    scanf("%lld",&num);
    n=num;

    for(i=0; i<BASE; i++)
    {
        freq[i]=0;
    }

    while(n!=0)
    {
        //finding last digit
        lastdigit=n%10;
        n=n/10;
        freq[lastdigit]++;
    }

    for(i=0; i<BASE; i++)
    {
        printf("Frequency of %d=%d\n",i,freq[i]);
    }

    return 0;
}
