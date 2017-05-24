#include<stdio.h>
struct record{
    int id;
    float cgpa;
    char name[15];
};

int main()
{

    struct record a[5];

    int i,n;

    for(i=0;i<5;i++)
    {
        printf("Enter id:\n");
        scanf("%d",&a[i].id);

        printf("Enter cgpa:");
        scanf("%f",&a[i].cgpa);

        printf("Enter name:");
        scanf("%s",a[i].name);

        printf("id: %d cgpa: %lf name: %s\n",a[i].id,a[i].cgpa,a[i].name);
        printf("\n");
    }


    return 0;
}
