#include<stdio.h>
int main()
{

    FILE *fp;
    fp=fopen("E:/nosemsters/codes/crefresh/crefresh/c_for_technical_interview_udemy_course/file pointer/b.txt","w");

    if(fp==NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    char ch;
    for(ch='A'; ch<='Z'; ch++)
    {
        fputc(ch,fp);
    }
//   fputc('a',fp);
    // fputc('b',fp);
    fclose(fp);
    printf("success\n");
    return 0;
}
