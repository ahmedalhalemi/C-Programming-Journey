#include <stdio.h>

int main() {
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    int grades[n];

    for (int i = 0; i < n; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    int sum = 0;
    int max = grades[0];
    int min = grades[0];

    for (int i = 0; i < n; i++) {
        sum += grades[i];

        if (grades[i] > max)
            max = grades[i];

        if (grades[i] < min)
            min = grades[i];
    }

    float average = (float)sum / n;

    printf("\nAverage grade: %.2f\n", average);
    printf("Highest grade: %d\n", max);
    printf("Lowest grade: %d\n", min);

    return 0;
}
