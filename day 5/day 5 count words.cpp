#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 1;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            words++;
        }
        i++;
    }

    printf("Number of words: %d\n", words);
    return 0;
}

