int main()
{
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
//    sum=a[0][0]+a[1][1]+a[2][2]; //it's manually but now i will do dynamically
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
        if(i==j){
            sum=sum+a[i][j];
        }
    }
}
    printf("%d",sum);
    return 0;
}
