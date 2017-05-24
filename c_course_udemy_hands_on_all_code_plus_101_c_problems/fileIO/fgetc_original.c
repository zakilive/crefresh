#include<stdio.h>
int main(){
FILE *fp;

fp=fopen("a.txt","r");
if(fp==NULL)
{
    printf("unable to open");
    return 0;
}
char ch;
ch=fgetc(fp); //char by char

while(!feof(fp)){
    printf("%c",ch);
    ch=fgetc(fp);
}
fclose(fp);
return 0;
}
