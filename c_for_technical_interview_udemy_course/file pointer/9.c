
#include<stdio.h>
int main(){
    FILE *fp;
    double data[]={10.25,5.54,8.96,12.45,100.01};
    fp=fopen("bin.bin","wb");
    if(fp==NULL)
    {
        int n0object=fwrite((void*)(data),sizeof(double),5,fp);
        printf("Total elements written:%d\n",n0object);
    }

    fclose(fp);

return 0;
}
