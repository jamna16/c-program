#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e = {101, "Alice", 55000.75};
    printf("Employee ID: %d\nName: %s\nSalary: %.2f\n", e.emp_id, e.name, e.salary);
    return 0;
}

