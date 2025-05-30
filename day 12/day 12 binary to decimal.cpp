#include <stdio.h>
#include <math.h>
int main() {
    int n, decimal = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while (n > 0) {
        rem = n % 10;
        decimal += rem * base;
        base *= 2;
        n /= 10;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}

