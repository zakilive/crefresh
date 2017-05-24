#include<stdio.h>
int main(){
int i,j,temp,a1[]={10,20,40,60,70};
//int a2[5];
for(i=0,j=4;i<5,j>=0;i++,j--){
    temp=a1[j];
    a1[j]=a1[i];
    a1[j]=temp;
}
for(j=0;j<5;j++){
    printf("%d\t",a1[j]);
}
return 0;
}
