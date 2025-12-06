/*Write a program in C that:

Asks user for name

Asks user for age

Prints:
"Hello NAME, you are AGE years old."
*/
#include <stdio.h>
int main(){
    int Age;
    char Name[50];
    printf("Input Your Name:");
    scanf("%s", Name);
    printf("Input Your Age:");
    scanf("%d",&Age);
    printf("Hello %s, you are %d years old.\n", Name, Age);
    return 0;
}