#include<stdio.h>
int Rule4(int num1, int num2){
    return num1 + num2;
}

int main(){
    int a=5,b=6;
    int sum=Rule4(a,b);
    printf("Sum is: %d",sum);
    return 0;
}