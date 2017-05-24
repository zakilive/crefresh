#include<stdio.h>
typedef union
{
    char pokarname[500];
    double pokarsize;
    int pokarage;
} poka;

typedef struct
{
    int id;
    float cgpa;
    char name[30];
    poka Bee;
    char btype;
} Student;

void inputShow(Student *spp)
{
    printf("Enter ID: ");
    scanf(" %d",&spp->id);
    printf("Enter CGPA: ");
    scanf(" %f",&spp->cgpa);
    printf("Enter NAMe: ");
    scanf(" %s",&spp->name);

    printf("Tell us about BUGS you like\n Big 'B' Small 'S' White 'W': ");
    scanf(" %c",&spp->btype);

    if(spp->btype=='B')
    {
        printf("Pokar Name: ");
        scanf(" %[^\n]",&spp->Bee.pokarname);
    }
    else if(spp->btype=='S')
    {
        printf("Pokar Age: ");
        scanf("%d",&spp->Bee.pokarage);
    }
    else if(spp->btype=='W')
    {
        printf("Pokar size");
        scanf("%d",&spp->Bee.pokarsize);
    }
}

void printShow(Student sp)
{
    printf("\n");
    printf("ID=%d\n",sp.id);
    printf("CGPA=%.2f\n",sp.cgpa);
    printf("Name=%s\n",sp.name);

      if(sp.btype=='B')
    {
        printf("Pokar Name: %s\n",sp.Bee.pokarname);
    }
    else if(sp.btype=='S')
    {
        printf("Pokar Age: %d\n",sp.Bee.pokarage);
    }
    else if(sp.btype=='W')
    {
        printf("Pokar size: %d\n",sp.Bee.pokarsize);
    }
}

int main()
{
    Student s1;

    inputShow(&s1);
    printShow(s1);


    return 0;
}
