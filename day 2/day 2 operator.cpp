#include <stdio.h>
int main() {
    int choice;
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result: %.2f\n", a + b); break;
        case 2: printf("Result: %.2f\n", a - b); break;
        case 3: printf("Result: %.2f\n", a * b); break;
        case 4: 
            if (b != 0)
                printf("Result: %.2f\n", a / b);
            else
                printf("Division by zero error!\n");
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}

