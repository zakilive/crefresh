#include<stdio.h>
struct as{
int id;
char title[15];
char author[15];
};

int main()
{
struct as a[2];
int i;
for(i=0;i<2;i++)
{
    printf("enter id: ");
    scanf("%d",&a[i].id);
    printf("Enter title: ");
    scanf("%s",a[i].title);
    printf("enter author name: \n");
    scanf("%s",a[i].author);
    printf("__________ For Book: %d ________\n",i+1);
    printf("id: %d\n title: %s\n author: %s\n",a[i].id,a[i].title,a[i].author);
}



    return 0;
}
