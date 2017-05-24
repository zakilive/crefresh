#include<stdio.h>
struct Product{
    char name[20];
    char price[20];
};

void printProductInfo(struct Product *pp){
    printf("Enter name: ");
    scanf(" %[^\n]",&pp->name);
    printf("Enter price: ");
    scanf(" %d",&pp->price);
}
int main()
{
struct Product p;

printProductInfo(&p);


    return 0;
}
