#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        if (i < 2) continue;
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

