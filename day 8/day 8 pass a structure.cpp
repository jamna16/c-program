#include <stdio.h>

struct Point {
    int x, y;
};

void display(struct Point p) {
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point pt = {5, 10};
    display(pt);
    return 0;
}

