#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int id;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s = {1, "John", {15, 8, 2000}};
    printf("ID: %d\nName: %s\nDOB: %02d-%02d-%04d\n", s.id, s.name, s.dob.day, s.dob.month, s.dob.year);
    return 0;
}

