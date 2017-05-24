#include<stdio.h>
int main()
{
    char str1[3]="We";
    char str2[6]=" Love";
    char str3[12]=" Bangladesh";
    char str4[35];

    int length,i,j=0;

    for(i=0;i<strlen(str1);i++){
        str4[j++]=str1[i];
    }

    for(i=0;i<strlen(str2);i++){
        str4[j++]=str2[i];
    }

    for(i=0;i<strlen(str3);i++){
        str4[j++]=str3[i];
    }

    str4[j]='\0';
    printf("%s\n",str4);

   return 0;
}
