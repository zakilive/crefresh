int main()
{
    int N,r,T;
    r=0;
    printf("Enter number to check: ");
    scanf("%d",&N);
    T=N;
    do{
        r=(r*10)+(T%10);
        T=T/10;
    }while(T!=0);
    if(N!=r)
        printf("%d is not pallindrome",N);
    else
        printf("%d is pallindrome",N);

    return 0;
}
