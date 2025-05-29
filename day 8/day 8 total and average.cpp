#include <stdio.h>

struct Student {
    char name[50];
    float marks[3];
};

int main() {
    struct Student s = {"John", {85, 90, 80}};
    float total = 0, average;
    for (int i = 0; i < 3; i++)
        total += s.marks[i];
    average = total / 3;
    printf("Total: %.2f\nAverage: %.2f\n", total, average);
    return 0;
}

