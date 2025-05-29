#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c); // Note the space before %c to consume any leftover whitespace

    printf("ASCII value of %c = %d\n", c, c);
    return 0;
}

