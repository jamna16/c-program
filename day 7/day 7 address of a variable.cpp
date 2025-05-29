#include <stdio.h>

int main() {
    int var = 42;
    int *ptr = &var;

    printf("Address of var: %p\n", (void*)ptr);
    return 0;
}

