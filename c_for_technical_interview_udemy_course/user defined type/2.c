#include<stdio.h>

typedef int integer; //self declaration
typedef struct Student student;

struct Student{

    int roll;
    char name[20];
    double gp;
}Student;

int main()
{
    integer x;
//    struct student s1,s2,s3;//we are not needing this as we are using
    student s1,s2,s3; //typedef is working here
    s1.roll=5;
    s2.roll=10;
    s1.gp=9.6;
    s2.gp=10.43;

    return 0;
}
