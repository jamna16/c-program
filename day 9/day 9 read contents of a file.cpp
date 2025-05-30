#include <stdio.h>

int main() {
    char ch;
    FILE *fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}

