#include "all.h"

int main() {
    char operator;
    double num1, num2;

    while (1) {
        printf("Enter an operator (+, -, *, /), or 'x' to exit: ");
        scanf(" %c", &operator);

        if (operator == 'x')
            exit(0); // Exit the program if 'x' is entered

        printf("Enter first operand: ");
        scanf("%lf", &num1);

        printf("Enter second operand: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", num1, num2, add(num1, num2));
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", num1, num2, subtract(num1, num2));
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", num1, num2, multiply(num1, num2));
                break;
            case '/':
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, divide(num1, num2));
                break;
            default:
                printf("Invalid operator! Please enter a valid operator.\n");
        }
        printf("\n");
    }

    return 0;
}