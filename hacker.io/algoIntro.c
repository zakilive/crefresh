#include<stdio.h>
int main(void)
{

    int i=0,j=0,k=0;
    char date[]="20170519";

    char year[]="YYYY";
    char month[]="MM";
    char day[]="DD";

    char *my_pointer=&date;

    while(i<4)
    {
        year[i]=*(my_pointer+i);
        i++;
    }

    while(j<2){
        month[j]=*(my_pointer+i);
        i++; j++;
    }

     //offset
    while(k<2)
    {
     day[k]=*(my_pointer+i);
     k++; i++;
    }

    printf("The year is %s and month is %s and day is %s",year,month,day);

    return 0;
}
