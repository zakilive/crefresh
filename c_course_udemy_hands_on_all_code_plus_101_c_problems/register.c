#include<stdio.h>
int int_pwr(register int m,register int e)
{
register int temp;
temp=1;
for( ; e ; e-- )
{

temp=temp*m;
 return temp;

}
