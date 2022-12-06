#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1, num2, result;
    char operator[1];

    printf("Enter first number : ");
    scanf("%lf", &num1);
    printf("Enter second number : ");
    scanf("%lf", &num2);
    printf("\n");
    result = num1 + num2;
    printf("Addition : %lf\n", result);
    result = num1 - num2;
    printf("Subtraction : %lf\n", result);
    result = num1 * num2;
    printf("Multiplication : %lf\n", result);
    result = num1 / num2;
    printf("Division : %lf\n", result);
    return 0;
}