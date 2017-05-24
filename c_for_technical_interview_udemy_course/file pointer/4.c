#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("E:/nosemsters/codes/crefresh/crefresh/c_for_technical_interview_udemy_course/file pointer/b.txt","r");
    if(fp==NULL)
    {
        printf("unable to open file");
        return 0;
    }
    //prime read
    char ch;
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }

    fclose(fp);


    return 0;
}
