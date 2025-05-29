#include <stdio.h>
#include <string.h>

struct StructData {
    int i;
    float f;
    char str[20];
};

union UnionData {
    int i;
    float f;
    char str[20];
};

int main() {
    struct StructData s = {10, 220.5, "Hello"};
    union UnionData u;

    u.i = 10;
    printf("Union int: %d\n", u.i);
    u.f = 220.5;
    printf("Union float (overwrites int): %.2f\n", u.f);
    strcpy(u.str, "Hello");
    printf("Union string (overwrites float): %s\n", u.str);

    printf("\nStruct: i = %d, f = %.2f, str = %s\n", s.i, s.f, s.str);

    printf("\nSize of struct: %lu\n", sizeof(s));
    printf("Size of union: %lu\n", sizeof(u));

    return 0;
}

