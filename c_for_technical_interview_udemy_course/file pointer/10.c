#include<stdio.h>
int main()
{



    fseek(fp,2*sizeof(double));
    //0 see_set from BOF
    //1 seek_cur from current location
    //2 seek_end from EOF
    //fseek(fp,2*sizeof(double),seek_set);
    fseek(fp,-1*sizeof(double),seek_end);
    -8
    fseek(fp,0L,0);
    fseek(fp,0L,2);

}
