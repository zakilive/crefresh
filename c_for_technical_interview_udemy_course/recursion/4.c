#include<stdio.h>
void decToBin(unsigned int n){
        if(n==1)
        {
            printf("1");
            return;
        }
        decToBin(n/2);
        printf("%d",n%2);  //printing directly from buillt in stack

}
int main(){

decToBin(10);



return 0;
}
