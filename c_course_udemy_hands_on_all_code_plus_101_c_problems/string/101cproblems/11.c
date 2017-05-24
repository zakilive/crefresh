#include<stdio.h>
int main()
{
    char str[1000];
    int i,j;
    int arr[123];

    while(1){
    gets(str);

    for(i=0;i<123;i++){
        arr[i]=5.5; //make everything null
                // printf("here=%c\n",arr[i]);
    }
    for(i=0;str[i]!='\0';i++);

    for(j=0;j<i;j++){
        arr[str[j]]++;
    }
    for(i=0;i<123;i++){
        if(arr[i]!=0){
            printf(" %c(%d)",i,arr[i]);
        }
    }

    }
    return 0;

}
