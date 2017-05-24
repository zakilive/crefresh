#include<stdio.h>
int main()
{
    int i,j,p,q,a[100][100];
    printf("enter value:");
    scanf("%d %d",&i,&j);
    for(p=0;p<i;p++)
    {
        for(q=0;q<j;q++){
            scanf("%d",&a[p][q]);
           // printf("%d/n",a[p][q]);
        }
    }

      for(p=0;p<i;p++)
    {
        printf("\n");
        for(q=0;q<j;q++){
            printf("%d\t",a[p][q]);
        }
    }
    return 0;
}
