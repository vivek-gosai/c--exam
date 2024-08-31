#include <stdio.h>

void performOperation(char operator, double v1, double v2);

int main() {
    char operator;
    double v1, v2;
    printf("Select an operation:\n");
    printf(" +  : Addition\n");
    printf(" -  : Subtraction\n");
    printf(" *  : Multiplication\n");
    printf(" /  : Division\n");
    printf("Enter your choice (+, -, *, /): ");
    
    scanf(" %c", &operator); 
    printf("Enter first number: ");
    scanf("%lf", &v1);
    printf("Enter second number: ");
    scanf("%lf", &v2);

    performOperation(operator, v1, v2);

    return 0;
}

void performOperation(char operator, double v1, double v2) {
    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", v1 + v2);
            break;
        case '-':
            printf("Result: %.2lf\n", v1 - v2);
            break;
        case '*':
            printf("Result: %.2lf\n", v1 * v2);
            break;
        case '/':
              printf("Result: %.2lf\n", v1 / v2);
            
            break;
        default:
            printf("enter correct symbol\n");
            break;
    }
}
