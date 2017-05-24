#include<stdio.h>
void toh(int n,int source,int aux,int dest)
{
    if(n==1){
            //just pick and place
        printf("move the disk from tower no: %d to tower no: %d\n",source,dest);
        return;
    }

    //move all n-1 disk to aux
    toh(n-1,source,dest,aux);
    toh(1,source,aux,dest);
    toh(n-1,aux,source,dest);

}

int main(){
toh(3,1,2,3);
return 0;
}
