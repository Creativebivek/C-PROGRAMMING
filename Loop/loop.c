#include<stdio.h>
int main(){
    int Num,i;
    printf("Enter Number:");
    scanf("%d",&Num);
    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n",Num,i,Num*i);
    }
    return 0;
}