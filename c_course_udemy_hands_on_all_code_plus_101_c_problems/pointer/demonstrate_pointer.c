#include<stdio.h>
int main()
{
int* pc;
int c;
c=22;
printf("____\n");
printf("Address of c:%u\n",&c);
printf("Value of C:%d\n",c);
printf("____\n");
pc=&c;
printf("address of pointer pc:%u\n",pc);
printf("content of pointer pc:%d\n",*pc);
printf("____\n");
c=11;
printf("Address of pointer c:%u\n",&c);
printf("Content of pointer c:%u\n",c);
printf("____\n");
*pc=9;
printf("Address of pointer c:%u\n",&pc);
printf("Content of pointer c:%u\n",c);
return 0;
}
