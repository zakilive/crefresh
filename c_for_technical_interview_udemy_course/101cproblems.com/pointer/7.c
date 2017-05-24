#include<stdio.h>
int main()
{
    int i;
    char fruitNames[4]={"Mango","jack-fruit","Banana","Litchi"};
    char *(*str)[4]=&fruitNames;
    for(i=0;i<4;i++)
    {
        printf("%s\n",(*str)[i]);
    }

    return 0;
}
