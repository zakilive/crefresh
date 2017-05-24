#include<stdio.h>
int main(){

int *pX;
int *pY;

int x,y;
x=100;
y=200;

pX=&x;
pY=&y;

printf("%d %d\n",*pX,*pY);

}
