/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int *x, int *y)
{
    int t = *y;
    *y = *x;
    *x = t;
}

int main()
{
    int i = 10, j = 5;
    swap(&i, &j);
    printf("%d %d\n", i, j);
    return 0;
}
 