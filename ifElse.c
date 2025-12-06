#include<stdio.h>
//#include<conio.h>
int main(){
    int Num1,Num2;
    printf("Input Your First Number:");
    scanf("%d",&Num1);
    printf("Input Your Second Number:");
    scanf("%d",&Num2);
    if(Num1>Num2){
        printf("First Number is Greater than Second Number %d > %d\n",Num1,Num2);
    }
    else if(Num1<Num2){
        printf("Second Number is Greater than First Number %d > %d\n",Num2,Num1);
    }    
    else{
        printf("Both Numbers are Equal %d and %d\n",Num1, Num2);
    }
    return 0;

}