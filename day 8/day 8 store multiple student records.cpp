#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3] = {
        {1, "John", 85},
        {2, "Emma", 90},
        {3, "Raj", 78}
    };
    for (int i = 0; i < 3; i++) {
        printf("\nID: %d\nName: %s\nMarks: %.2f\n", students[i].id, students[i].name, students[i].marks);
    }
    return 0;
}

