#include<stdio.h>
int main()
{
    int N1,N2,ch,resi;
    float resf;
    do
    {
        printf("\n\n Enter value for operation:");
        printf("\n 1->+ 2->- 3->* 4->/ 5->exit\n:");
        scanf("%d",&ch);

        if(ch>=1 && ch<=4)
        {
            printf("\n Enter 2 numbers:\n");
            scanf("\t%d %d",&N1,&N2);
        }
        switch(ch)
        {
        case 1:
            resi=N1+N2;
            printf("Result: %d",resi);
            break;
        case 2:
            resi=N1-N2;
            printf("Result: %d",resi);
            break;
        case 3:
            resi=N1*N2;
            printf("Result: %d",resi);
            break;
        case 4:
            resf=N1/(float)N2;
            printf("Result: %f",resf);
            break;
        case 5:
            break;
        default:
            ("\n Invalid choice");
        }
    }while(ch!=5);
    return 0;
}
