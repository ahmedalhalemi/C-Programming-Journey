#include <stdio.h>

int main() {
    int n, temp, choice, result;

    // validate number of elements
    while (1) {
        printf("Enter number of elements: ");
        result = scanf("%d", &n);

        if (result != 1) {
            printf("Invalid input! Please enter a valid number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (n <= 0) {
            printf("Please enter a positive number.\n");
            continue;
        }

        break;
    }

    int arr[n];

    // input array elements with validation
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Enter number %d: ", i + 1);
            result = scanf("%d", &arr[i]);

            if (result != 1) {
                printf("Invalid input! Please enter a valid number.\n");
                while (getchar() != '\n');
                continue;
            }

            break;
        }
    }

    // validate sorting choice
    while (1) {
        printf("\nChoose sorting order:\n");
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf("Enter your choice: ");

        result = scanf("%d", &choice);

        if (result != 1) {
            printf("Invalid input! Please enter 1 or 2.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice != 1 && choice != 2) {
            printf("Please choose only 1 or 2.\n");
            continue;
        }

        break;
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((choice == 1 && arr[j] > arr[j + 1]) ||
                (choice == 2 && arr[j] < arr[j + 1])) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // print sorted array
    printf("\nSorted numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
} 
