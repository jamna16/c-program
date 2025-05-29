#include <stdio.h>

int globalVar = 100; // Global variable

void showVariables() {
    int localVar = 50; // Local variable
    printf("Inside function - Global: %d, Local: %d\n", globalVar, localVar);
}

int main() {
    printf("In main - Global Variable: %d\n", globalVar);
    showVariables();
    return 0;
}

