#include<stdio.h>
typedef struct Writer{
    char name[50];
    char genre[50];
}Book;

int main(){
struct Writer ary[5];
Book b;
int i;
for(i=0;i<3;i++){
    printf("Enter name: ");
    scanf(" %[^\n]",&ary[i].name);
    printf("Enter genre: ");
    scanf(" %[^\n]",&ary[i].genre);
    printf("%d. Name: %s; Genre: %s\n",i+1,ary[i].name,ary[i].genre);
}


return 0;
}
