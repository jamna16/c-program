#include <stdio.h>

int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char ch = *str | 32; // Convert to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
        str++;
    }
    return count;
}

int main() {
    char s[] = "Hello World";
    printf("Vowel count: %d\n", countVowels(s));
    return 0;
}

