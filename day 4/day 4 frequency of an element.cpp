#include <stdio.h>

int main() {
    int n, i, j, count, visited[100] = {0}, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Element - Frequency\n");
    for (i = 0; i < n; i++) {
        if (visited[i])
            continue;
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d - %d\n", arr[i], count);
    }
    return 0;
}

