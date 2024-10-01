#include <stdio.h>

typedef struct { int x; int y; } Point;

Point *create_point(int x, int y) {
    // Point p = {x, y}; // Stack
    // return &p;
    Point *p = malloc(sizeof(Point)); // Heap
    return p;
    p->x = y;
    p->y = y;
}

int main() {
    Point *origin = create_point(0, 0);
    printf("(%d, %d)\n", origin->x, origin->y);
    return 0;
}
