#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        i++;
    }

    for (j = 0; j < i; j++) {
        rev[j] = str[i - j - 1];
    }
    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);
    return 0;
}

