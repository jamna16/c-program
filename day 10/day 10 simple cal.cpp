#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter an expression (a + b): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero error.\n");
            break;
        default: printf("Invalid operator.\n");
    }
    return 0;
}

