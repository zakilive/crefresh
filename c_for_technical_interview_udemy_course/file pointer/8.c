#include<stdio.h>
int main()
{
    FILE *fp;
    double data[5];

    fp=fopen("bin.bin","rb");
    if(fp==NULL){
        printf("Unable  to open file");
        return 0;
    }

    int nObjects=fread((void*)data,sizeof(double),5,fp);
    printf("Total Read: %d\n",nObjects);

    int i;
    printf("content of array:");
    for(i=0;i<5;i++)
        printf("%10.2lf",data[i]);
    fclose(fp);
    return 0;
}
