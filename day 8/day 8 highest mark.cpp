#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student s[3] = {
        {"John", 85},
        {"Emma", 92},
        {"Raj", 78}
    };
    float max = s[0].marks;
    char topStudent[50];
    for (int i = 0; i < 3; i++) {
        if (s[i].marks > max) {
            max = s[i].marks;
            str cpy(topStudent, s[i].name);
        }
    }
    printf("Topper: %s with %.2f marks\n", topStudent, max);
    return 0;
}

