#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file1.txt", "r");
    char ch;
    int count = 0;

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    fclose(fp);
    printf("Total vowels: %d\n", count);
    return 0;
}

