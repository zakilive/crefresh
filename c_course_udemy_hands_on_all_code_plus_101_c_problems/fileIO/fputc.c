#include<stdio.h>
int main(){
FILE *fp;
fp=fopen("a.txt","a"); //apend mode

if(fp==NULL)
{
printf("unable to open file\n");
return 1;
}
//file opened successfully

fputc('a',fp);
fputc('b',fp);
fclose(fp);
printf("Success\n");
return 0;
}
