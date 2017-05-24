/*

Program to check prime number or not in c

*/

#include<stdio.h>
#include<math.h>


int isPrime(int n)
{
    int i;
    for(i=2; i<sqrt(n); i++) //here primarility test logic is using here 2 to sqrt(n)..details can be found in wikipedia
    {
        if(n%i==0)
        {
            return 2;
        }
    }
    return 1;
}

int sumOfPrimes(int lb,int ub){
    int count,sum;
    sum=0;
    for(count=lb;count<=ub;count++)
    {
        if(isPrime(count)==1){
            sum=sum+count;
        }
    }
    return sum;
}

int main()
{
    int i,lb,ub;
    printf("Enter lower bound: ");
    scanf("%d",&lb);
    printf("Enter upper bound: ");
    scanf("%d",&ub);

    for(i=lb; i<=ub; i++)
    {
        if(isPrime(i)==1)
        {
            printf(" %d is prime\n",i);
        }
//        else if(isPrime(count)==0)
//        {
//            printf("no %d is not prime\n",count);
//        }
    }

    int s;
    s=sumOfPrimes(lb,ub);
    printf("Sum of primes in the rang %d-%d is: %d\n",lb,ub,s);



    return 0;
}
