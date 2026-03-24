#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &target);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Number found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number not found.\n");
    }

    return 0;
}
