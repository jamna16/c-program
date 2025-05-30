#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int num, sum = 0;

    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF)
        sum += num;

    fclose(fp);
    printf("Sum of integers: %d\n", sum);
    return 0;
}

