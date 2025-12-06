/*
Write a program that:

Takes two integers

Prints:
1.Sum
2.Difference
3.Product
4.Quotient
5.Remainder

Example output format:
Sum = 13
Difference = 7
Product = 30
Quotient = 3
Remainder = 1

*/

#include <stdio.h>

int main()
{
    int Num1, Num2;

    printf("Enter First Number: ");
    scanf("%d", &Num1);

    printf("Enter Second Number: ");
    scanf("%d", &Num2);

    printf("Sum (%d + %d) = %d\n", Num1, Num2, Num1 + Num2);
    printf("Difference (%d - %d) = %d\n", Num1, Num2, Num1 - Num2);
    printf("Product (%d * %d) = %d\n", Num1, Num2, Num1 * Num2);
    printf("Quotient (%d / %d) = %d\n", Num1, Num2, Num1 / Num2);
    printf("Remainder (%d %% %d) = %d\n", Num1, Num2, Num1 % Num2);

    return 0;
}
