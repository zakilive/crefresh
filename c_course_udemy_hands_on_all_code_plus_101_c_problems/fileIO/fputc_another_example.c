#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("a.txt","w"); //apend mode

    if(fp==NULL)
    {
        printf("unable to open file\n");
        return 1;
    }
//file opened successfully
    char ch;
    for(ch='A'; ch<='Z'; ch++)
        fputc(ch,fp);
    fclose(fp);
    printf("Success\n");
    return 0;
}
