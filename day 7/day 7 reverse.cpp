#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char s[] = "Pointers";
    reverse(s);
    printf("Reversed: %s\n", s);
    return 0;
}

