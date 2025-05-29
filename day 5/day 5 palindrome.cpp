#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;
    i = 0;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

