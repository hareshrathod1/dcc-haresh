/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point midpoint(struct point p1, struct point p2) {
    return (struct point) {
        .x = (p1.x + p2.x) / 2,
        .y = (p1.y + p2.y) / 2
    };
}

int main() {
    struct point a = {1, 2};
    struct point b = {5, 8};

    struct point mid = midpoint(a, b);  // Direct assignment
    printf("Midpoint: x = %d, y = %d\n", mid.x, mid.y);

    // Nested call (as you mentioned):
    struct point c = {0, 0};
    struct point d = {10, 10};
    struct point mid2 = midpoint(midpoint(a, b), midpoint(c, d));
    printf("Midpoint of midpoints: x = %d, y = %d\n", mid2.x, mid2.y);

    return 0;
}
