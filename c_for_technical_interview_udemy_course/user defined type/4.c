#include<stdio.h>
typedef struct
{
    int roll;
    char name[20];
    double gp;
} sTudent;

void inputStudent(sTudent *sp)
{

    printf("enter roll: ");
    scanf("%d",&sp->roll);
    printf("enter name:");
    scanf(" %[^\n]",sp->name);
    printf("enter grade point: \n");
    scanf("%lf",&sp->gp);
}

void printStudent(sTudent sp)
{
    printf("Roll: %4d, Name: %-20s %10.2lf\n",sp.roll,sp.name,sp.gp);
}

int main()
{
    sTudent s;
    inputStudent(&s);
    printStudent(s);

    return 0;
}
