#include <stdio.h>

int main() {
    int n, i, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array:\n");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}

