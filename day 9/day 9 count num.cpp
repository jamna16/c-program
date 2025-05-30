#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "r");
    char ch;
    int lines = 0;
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') lines++;
    }
    fclose(fp);
    printf("Number of lines: %d\n", lines + 1);
    return 0;
}

