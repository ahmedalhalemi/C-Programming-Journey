#include <stdio.h>

int main() {
    int input_number;

    printf("Welcome to the Odd/Even Checker Program!\n");
    printf("Please enter a valid integer:\n");

    if (scanf("%d", &input_number) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (input_number % 2 == 0)
        printf("%d is Even.\n", input_number);
    else
        printf("%d is Odd.\n", input_number);

    return 0;
} 
