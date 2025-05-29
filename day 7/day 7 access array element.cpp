#include <stdio.h>

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int *ptr = data;

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

