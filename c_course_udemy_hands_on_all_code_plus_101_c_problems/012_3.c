#include<stdio.h>
int main(void){

unsigned int i;
int j;
i=1;
/*left shifts */
for(j=0;j<4;j++){
    i=i<<1;
    printf("Left Shift %d: %d\n",j,i);
}
printf("\n");
/* right shifts */
for(j=0;j<4;j++){
    i=i>>1;
    printf("Right Shift %d: %d\n",j,i);
}

return 0;

}
