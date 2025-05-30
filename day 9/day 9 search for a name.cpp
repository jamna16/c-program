#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("file1.txt", "r");
    char word[50], temp[50];
    int found = 0;

    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%s", word);

    while (fscanf(fp, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0) {
            found = 1;
            break;
        }
    }
    fclose(fp);

    if (found)
        printf("Word found!\n");
    else
        printf("Word not found.\n");

    return 0;
}

