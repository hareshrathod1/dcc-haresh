/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sum(int *xs, int n)
{
    int s = 0;
    for (size_t i = 0; i < n; ++i) s += xs[i];
    return s;
}

int main()
{
    int xs[] = { 1,2,3,4,5,6,7,88,99,887,66};
    printf("%d %d\n", sum(xs, 6), sum(xs + 2, 3));
    return 0;
}