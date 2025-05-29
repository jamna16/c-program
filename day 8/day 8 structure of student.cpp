#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s = {1, "John", 87.5};
    printf("ID: %d\nName: %s\nMarks: %.2f\n", s.id, s.name, s.marks);
    return 0;
}

