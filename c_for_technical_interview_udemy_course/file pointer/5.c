#include<stdio.h>
#define SIZE 80
int main()
{
    FILE *fp;
    fp=fopen("E:/nosemsters/codes/crefresh/crefresh/c_for_technical_interview_udemy_course/file pointer/chk.txt","r");
    if(fp==NULL)
    {
        printf("unable to open file");
        return 0;
    }
    //prime read

    char names[SIZE];
    while(1){
    fgets(names,SIZE,fp);
    printf("%s",names);
    if(feof(fp))
        break;
    }
    fclose(fp);


    return 0;
}
