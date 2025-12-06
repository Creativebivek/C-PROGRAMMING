/* 
Write a C program that:

Takes input:

Your name

Your age

Your height (float)

Your favorite letter (char)

Then print them clearly like:

Your name is: Bivek
Your age is: 23
Your height is: 5.8
Your favorite letter is: B
*/

#include<stdio.h>
int main(){
    int Age;
    char Name[50];
    float Height;
    char favoriteletter;

    printf("Input Your Name:");
    scanf("%s", Name);

    printf("Input Your Age:");
    scanf("%d",&Age);

    printf("Input Your Height:");
    scanf("%f",&Height);

    printf("Input Your Favorite Letter:");
    scanf(" %c",&favoriteletter);

    printf("\n Hello %s here is your Information:\n",Name);
    printf("Your name is: %s\n", Name);
    printf("Your age is: %d\n", Age);
    printf("Your height is: %.1f\n", Height);
    printf("Your favorite letter is: %c\n", favoriteletter);
    return 0;
}