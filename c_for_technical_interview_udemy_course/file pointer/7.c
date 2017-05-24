#include<stdio.h>
#define SIZE 80
int main()
{
    FILE *fp;
    FILE *fpr;

    fp=fopen("E:/nosemsters/codes/crefresh/crefresh/c_for_technical_interview_udemy_course/file pointer/frmt.txt","r");
    if(fp==NULL)
    {
        printf("unable to open file\n");
        return 0;
    }

    fpr=fopen("E:/nosemsters/codes/crefresh/crefresh/c_for_technical_interview_udemy_course/file pointer/report1.txt","w");

    if(fpr==NULL)
    {
        printf("unable to open file\n");
        return 0;

    }
    //prime read

    char names[SIZE];
    int salary;
    double pertHRA;
    double houseRent;
    double netSalary;

    while(1)
    {
        fscanf(fp, " %[^,],%d,%lf", names, &salary,&pertHRA);
        //printf("%s gets $%d per hour\n",names,salary);
       // fprintf(fpr,"%s gets $%d per hour\n",names,salary);
        houseRent=salary*pertHRA;
        netSalary=salary-houseRent;
        fprintf(fpr,"%-20s %10d %6.2lf %8.2lf %12.2lf\n", names, salary, pertHRA, houseRent, netSalary);
        if(feof(fp))
            break;
    }
    fclose(fp);


    return 0;
}
