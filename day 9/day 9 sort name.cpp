#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main() {
    FILE *fp = fopen("names.txt", "r");
    char names[MAX][100], temp[100];
    int n = 0, i, j;

    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while (fgets(names[n], sizeof(names[n]), fp))
        n++;
    fclose(fp);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted Names:\n");
    for (i = 0; i < n; i++)
        printf("%s", names[i]);

    return 0;
}

