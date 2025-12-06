#include<stdio.h>
int Rule3(char name[]){
    printf("Hello %s",name);
    return 0;
}
int main(){
    char name[50];
    printf("Enter Your Name:");
    scanf("%s",name);
    Rule3(name);
    return 0;
}