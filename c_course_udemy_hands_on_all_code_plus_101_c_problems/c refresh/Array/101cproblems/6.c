int main()
{
    int i,j,count=0,sum=0;
    float avg;
    int ary[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&ary[i][j]);
            count++;
            sum=sum+ary[i][j];
        }
    }
    avg=sum/count;
    printf("%.2f",avg);
    return 0;
}
