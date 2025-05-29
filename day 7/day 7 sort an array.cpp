#include <stdio.h>

void sort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
}

int main() {
    int data[] = {50, 20, 40, 10, 30};
    int n = sizeof(data) / sizeof(data[0]);

    sort(data, n);

    for (int i = 0; i < n; i++)
        printf("%d ", *(data + i));
    printf("\n");

    return 0;
}

