#include<stdio.h>
void rule2(char name[]){
    printf("Hello %s",name);
}

int main(){
    char name[50];
    printf("Enter Your Name:");
    scanf("%s",name);
    rule2(name);
    return 0;
}