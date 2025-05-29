#include <stdio.h>

int findLength(char *str) {
    char *ptr = str;
    while (*ptr) ptr++;
    return ptr - str;
}

int main() {
    char s[] = "Hello, World!";
    printf("Length = %d\n", findLength(s));
    return 0;
}

