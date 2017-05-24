
#include<stdio.h>
int main(){
int i,j;
char str[20];
gets(str);
for(i=0;str[i]!='\0';i++);

for(j=0;j<i;j++)
{
if(str[j]>='x' && str[j]<='z')
{
    str[j]=str[j]-23;
}
else{
    str[j]=str[j]+3;
}
//putchar(str[j]);
printf("%c",str[j]);
}
//

return 0;
}
