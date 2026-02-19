#include <stdio.h>

int main() {
    int input_number;
    char choice;

    printf("Welcome to the Odd/Even Checker Program!\n");

    do {
        printf("\nEnter a valid integer: ");

        if (scanf("%d", &input_number) != 1) {
            printf("Invalid input. Please enter a valid integer.\n");
            return 1;
        }

        if (input_number % 2 == 0)
            printf("%d is Even.\n", input_number);
        else
            printf("%d is Odd.\n", input_number);

        printf("Do you want to try again? (y = yes / n = no): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended. Goodbye!\n");

    return 0;
}
