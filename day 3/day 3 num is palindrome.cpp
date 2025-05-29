#include <stdio.h>

int main() {
    int num, original, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}

