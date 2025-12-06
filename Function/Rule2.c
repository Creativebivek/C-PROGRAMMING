#include<stdio.h>
void rule2(char name[]){   // Function with void return type and parameters
    printf("Hello %s",name);
}

int main(){
    char name[50];
    printf("Enter Your Name:");
    scanf("%s",name);
    rule2(name); // Function call with arguments
    return 0;
}