#include <stdio.h>

int main() {
    FILE *src = fopen("file1.txt", "r");
    FILE *dest = fopen("file2.txt", "w");
    char ch;

    if (src == NULL || dest == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("Contents copied successfully.\n");
    return 0;
}

