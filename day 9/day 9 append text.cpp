#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "a");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }
    fprintf(fp, "Appended line to the file.\n");
    fclose(fp);
    return 0;
}

