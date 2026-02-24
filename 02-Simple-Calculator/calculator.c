#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    char choice;

    printf("Welcome to the Simple Calculator!\n");

    do {
        printf("\nEnter first number: ");
        if (scanf("%f", &num1) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        if (scanf("%f", &num2) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        switch (operator) {
            case '+':
                printf("Result: %.2f\n", num1 + num2);
                break;

            case '-':
                printf("Result: %.2f\n", num1 - num2);
                break;

            case '*':
                printf("Result: %.2f\n", num1 * num2);
                break;

            case '/':
                if (num2 != 0)
                    printf("Result: %.2f\n", num1 / num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;

            default:
                printf("Invalid operator.\n");
        }

        printf("Do you want to calculate again? (y = yes / n = no): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended. Goodbye!\n");

    return 0;
} 
