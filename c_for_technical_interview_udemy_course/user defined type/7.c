#include<stdio.h>
typedef union
{
    double weight;
    int size;
    char color[10];
} Description;

typedef struct
{
    int itmno;
    char itname[30];
    Description d;
    char dtype;
    double price;
} Item;
void inputItem(Item *ip)
{
    printf("enter item number: ");
    scanf("%d",&ip->itmno);
    printf("enter item name:");
    scanf(" %s",&ip->itname);
    printf("enter price:");
    scanf("%lf",&ip->price);

    printf("eight/size/color? w for weight, s for size c for color");
    scanf(" %c",&ip->dtype);

    if(ip->dtype=='s')
    {
        printf("enter size: ");
        scanf("%d",&ip->d.size);
    }
    else if(ip->dtype=='c')
    {
        printf("enter color: ");
        scanf(" %s",&ip->d.color);
    }
    else if(ip->dtype=='w')
    {
        printf("enter weight");
        scanf(" %s",&ip->d.weight);
    }
}

void printItem(Item itam){
    printf("Inum: %d\n",itam.itmno);
    printf("Iname: %s\n",itam.itname);
    printf("Price: %10.2lf",itam.price);




}

int main()
{

    Item item;
    item.d.size=10;
    item.d.weight=60.5;



    return 0;
}
