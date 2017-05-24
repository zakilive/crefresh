#include<stdio.h>
int main()
{
    FILE *fp;
    double val;

    fp=fopen("bin.bin","rb");
    if(fp==NULL)
    {
        printf("Unable to open file\n");
        return 0;
    }

    fseek(fp,2*sizeof(double),SEEK_SET);
    fread((void*)&val,sizeof(double),1,fp);

    printf("3rdrec: %lf\n",val);

    fseek(fp,-1*sizeof(double),SEEK_END);
fread((void*)&val,sizeof(double),1,fp);
    printf("Last rec: %lf\n",val);

fseek(fp,-1*sizeof(double),SEEK_SET);
fread((void*)&val,sizeof(double),1,fp);


    printf("2nd rec: %lf\n",val);

    return 0;
}
