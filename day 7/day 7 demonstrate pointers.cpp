#include <stdio.h>

int main() {
    int val = 100;
    int *ptr = &val;
    int **pptr = &ptr;

    printf("Value = %d\n", **pptr);
    return 0;
}

