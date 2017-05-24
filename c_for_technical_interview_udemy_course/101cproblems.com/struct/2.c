#include<stdio.h>
typedef struct
{
    int id;
    char title[20];
    char author[200];
} Books;

void inputShow(Books bo1)
{
    printf("Enter ID: ");
    scanf(" %d",&bo1.id);
    printf("Enter Title: ");
    scanf(" %[^\n]",bo1.title);
    printf("Enter Author: ");
    scanf(" %[^\n]",bo1.author);

    printf("%d\n",bo1.id);
    printf("%s\n",bo1.title);
    printf("%s\n",bo1.author);
}

int main()
{
    Books b1;
    Books b2;

    inputShow(b1);
    inputShow(b2);

    return 0;
}
