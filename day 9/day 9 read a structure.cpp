#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp = fopen("student.dat", "rb");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    fread(&s, sizeof(struct Student), 1, fp);
    fclose(fp);

    printf("ID: %d\nName: %s\nMarks: %.2f\n", s.id, s.name, s.marks);
    return 0;
}

