#include<Stdio.h>
int main()
{
    char str[20];
    int i;
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        putchar(str[i]);
        printf("\n");
    }

    return 0;
}
