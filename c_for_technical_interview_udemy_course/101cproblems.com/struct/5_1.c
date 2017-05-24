#include<stdio.h>
struct Product{
    char name[20];
    double price;
};

void printProductInfo(struct Product *pp){
    printf("Enter name: ");
    scanf(" %[^\n]",&pp->name);
    printf("Enter price: ");
    scanf(" %lf",&pp->price);
}
void printER(struct Product ppp){
    printf("name: %s\n",ppp.name);
    printf("Enter price: %.2lf\n",ppp.price);
}
int main()
{
struct Product p;

printProductInfo(&p);
printER(p);

    return 0;
}
