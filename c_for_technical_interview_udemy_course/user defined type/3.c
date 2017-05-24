#include<stdio.h>
typedef struct{
    int age;
    char name[20];
    double gp;
}student;

int main()
{
    student s1;
    student *spointer;

    spointer=&s1;

    spointer->age=15; //pointer needs arrow sign to retrive data from Struct typedef
    spointer->gp=4.5;

    scanf("%[^\n]",spointer->name);
    printf("%s\n",spointer->name);

    //we can also print like this
    printf("Age=%d\n",s1.age);
    //it is same as
    printf("Age=%d\n",spointer->age);

    return 0;
}
