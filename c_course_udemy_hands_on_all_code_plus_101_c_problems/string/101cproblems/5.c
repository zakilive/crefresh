#include<stdio.h>
int main()
{
    char str1[20],str2[20],str3[20],deststr[60];
    int i,j,k;
    gets(str1);
    gets(str2);
    gets(str3);

    for(i=0;(deststr[i]=str1[i])!='\0';i++);

    for(j=0;(deststr[i]=str2[j])!='\0';i++,j++);

    for(k=0;(deststr[i]=str3[k])!='\0';i++,k++);
    printf("%s",deststr);

}
