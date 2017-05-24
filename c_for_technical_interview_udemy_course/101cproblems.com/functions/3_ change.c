#include<stdio.h>
void func();

int main()
{
    func();
    return 0;
}

void func()
{
    int a;
    while((scanf("%d",&a))!=EOF)
    {
        if(a%2==0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    }
}
