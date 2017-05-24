#include<stdio.h>
int main(){
int i,j,a1[]={10,20,40,60,70};
int a2[5];
for(i=0,j=4;i<5,j>=0;i++,j--){
    a2[j]=a1[i];
}
for(j=0;j<5;j++){
    printf("%d\t",a2[j]);
}
return 0;
}
