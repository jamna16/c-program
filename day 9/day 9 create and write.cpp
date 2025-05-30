#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Hello, this is a sample text file.\n");
    fclose(fp);
    return 0;
}

