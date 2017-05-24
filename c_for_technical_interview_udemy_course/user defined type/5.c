#include<stdio.h>
typedef struct
{
    int roll;
    char name[20];
    double gp;
    double phy,chem,math;
}sTudent;

void inputStudent(sTudent *sp)
{
    printf("enter roll: ");
    scanf("%d",&sp->roll);
    printf("enter name:");
    scanf(" %[^\n]",sp->name);
    printf("enter grade point: \n");
    scanf("%lf",&sp->gp);
    printf("marks in physics: ");
    scanf("%lf",&sp->phy);
    printf("marks in chemistry: ");
    scanf("%lf",&sp->chem);
    printf("marks in maths: ");
    scanf("%lf",&sp->math);
}

double getAverageMarks(sTudent s){
    double sum=0.0;
    sum=s.phy+s.chem+s.math;
    return sum/3.0;
}

char getGrade(sTudent s){
    char grade;
    double avg=getAverageMarks(s);
    if(avg>90)
        grade='A';
    else if(avg>=80 && avg<90)
        grade='B';
    else if(avg>=70 && avg<80)
        grade='C';
    else if(avg>=60 && avg<70)
        grade='D';
    else if(avg>=50 && avg<60)
        grade='E';
    else
        grade='F';
    return grade;
}

void printStudent(sTudent sp)
{
    printf("Student Details\n");
    printf("Roll: %-4d\n",sp.roll);
    printf("Name: %-2s\n",sp.name);
    printf("Physics: %-10.2lf\n",sp.phy);
    printf("Chemistry: %-10.2lf\n",sp.chem);
    printf("Math: %-10.2lf\n",sp.math);
    printf("Grade: %-4c\n",getGrade(sp));
    //printf("Roll: %4d, Name: %-20s %10.2lf\n",sp.roll,sp.name,sp.gp);
}

int main()
{
    sTudent s;
    inputStudent(&s);
    printStudent(s);

    return 0;
}
