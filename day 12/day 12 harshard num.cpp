#include <stdio.h>
int main() {
    int n, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (n % sum == 0)
        printf("%d is a Harshad number.\n", n);
    else
        printf("%d is not a Harshad number.\n", n);
    return 0;
}

