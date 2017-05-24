#include<stdio.h>
int main(){

int count;
for(count=1;count<=100;count++){
    if(count%2==0)
        continue; //continue mane erpore ja ase setar porer ongsjo r print hobe na borong increment ta add hoye jabe direct
    printf("Count = %d\n",count);
}

return 0;
}
