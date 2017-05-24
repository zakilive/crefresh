#include<stdio.h>

int is_lower_case(char);
int is_upper_case(char);
char to_upper_case(char); //uppercase quivalent of lowercase or uppercase as it is
char to_lower_case(char); //lowercase equivalent if uppercase or lowercase will print

char to_lower_case(char ch)
{
    if(is_upper_case(ch))
    {
        return ch+32; //if it  is uppercase then we are making it to the lowercase by adding 32
    }
    else
    {
        return ch;
    }
}

char to_upper_case(char ch)
{
    if(is_lower_case(ch))
    {
        return ch-32;
    }
    else
    {
        return ch;
    }
}

int is_lower_case(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_upper_case(char ch)
{
    if(ch>='A' & ch<='Z')
    {
        return 1; //1 means by default true in c
    }
    else
    {
        return 0; //0 means by default false
    }

}


int main()
{
    char k,p;
    p='A';
    k=to_lower_case(p);
    printf("Lower case equivalent of %c is %c\n\n",p,k);

    p='p';
    k=to_upper_case(p);
    printf("Upper case equivalentof %c is %c\n",p,k);

    return 0;

}
