#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
};

int main() {
    struct Student s[3] = {
        {"Zara", 3},
        {"Anna", 1},
        {"Mike", 2}
    };

    struct Student temp;
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Sorted students by name:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s\n", s[i].id, s[i].name);
    }
    return 0;
}

