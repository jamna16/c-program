#include <stdio.h>

void callByValue(int a) {
    a += 10;
    printf("Inside callByValue: %d\n", a);
}

void callByReference(int *a) {
    *a += 10;
    printf("Inside callByReference: %d\n", *a);
}

int main() {
    int x = 5;
    printf("Original value: %d\n", x);

    callByValue(x);
    printf("After callByValue: %d\n", x);

    callByReference(&x);
    printf("After callByReference: %d\n", x);

    return 0;
}

