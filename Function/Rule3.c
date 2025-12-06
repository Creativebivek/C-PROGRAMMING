#include<stdio.h>
int Rule3(char name[]){  // Function with int return type and parameters
    printf("Hello %s",name);
    return 0;
}
int main(){
    char name[50];
    printf("Enter Your Name:");
    scanf("%s",name);
    Rule3(name); // Function call with arguments
    return 0;
}