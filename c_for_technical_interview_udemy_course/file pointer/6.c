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

    fpr=fopen("E:/nosemsters/codes/crefresh/crefresh/c_for_technical_interview_udemy_course/file pointer/report.txt","w");

    if(fpr==NULL)
    {
        printf("unable to open file\n");
        return 0;

    }
    //prime read

    char names[SIZE];
    int salary;
    while(1)
    {
        fscanf(fp, " %[^,],%d", names, &salary);
        printf("%s gets $%d per hour\n",names,salary);
        fprintf(fpr,"%s gets $%d per hour\n",names,salary);

        if(feof(fp))
            break;
    }
    fclose(fp);


    return 0;
}
