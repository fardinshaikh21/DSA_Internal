#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle error as needed
    }
    return (double)a / b;
}

int remainder(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle error as needed
    }
    return a % b;
}   

int main() {

    int num1,num2;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("Addition: %d + %d = %d\n", num1, num2, add(num1, num2));                                                
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiply(num1, num2));
    printf("Division: %d / %d = %.2f\n", num1, num2, divide(num1, num2));   
    printf("Remainder: %d %% %d = %d\n", num1, num2, remainder(num1, num2));

    return 0;
}