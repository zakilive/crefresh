#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("a.txt","r"); //apend mode

    if(fp==NULL)
    {
        printf("unable to open file\n");
        return 1;
    }
//file opened successfully
    char names[80];

    while(1)
    {
        fgets(names,80,fp);
        printf("%s",names);
        if(feof(fp))
            break;
    }

    fclose(fp);
    //printf("Success\n");
    return 0;
}
