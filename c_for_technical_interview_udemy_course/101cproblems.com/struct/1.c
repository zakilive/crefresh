#include<stdio.h>
typedef struct
{
    int id;
    float cgpa;
    char name[30];

} Student;

void inputShow(Student *spp)
{
    printf("Enter ID: ");
    scanf(" %d",&spp->id);
    printf("Enter CGPA: ");
    scanf(" %f",&spp->cgpa);
    printf("Enter NAMe: ");
    scanf(" %s",&spp->name);
}

void printShow(Student sp)
{
    printf("\n");
    printf("ID=%d\n",sp.id);
    printf("CGPA=%.2f\n",sp.cgpa);
    printf("Name=%s\n",sp.name);
}

int main()
{
    Student s1;

    inputShow(&s1);
    printShow(s1);


    return 0;
}
