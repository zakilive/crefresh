#include<stdio.h>
int main(){

FILE *fp;
fp=fopen("names.txt","r");
if(fp==NULL)
{
printf("unable to open file\n");
return 0;
}
char name[80];
int salary;
while(1){
    fscanf(fp," %[^,],%d",name,&salary);
    printf("%s name gets %d per hour\n",name,salary);
    if(feof(fp)){
        break;
    }
}


return 0;
}
