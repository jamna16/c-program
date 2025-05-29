#include <stdio.h>

int main() {
    int x = 15, y = 25;
    int *p = &x, *q = &y;
    int sum = *p + *q;

    printf("Sum = %d\n", sum);
    return 0;
}

