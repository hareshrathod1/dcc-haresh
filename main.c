/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


    

struct point {
    int x;
    int y;
};

void drop_to_x_axis(struct point *p) {
    if (p != NULL) { 
        p->y = 0;
    }
}

int main() {
    struct point my_point = {5, 10};
    printf("Original point: x = %d, y = %d\n", my_point.x, my_point.y);

    drop_to_x_axis(&my_point); 

    printf("Point after dropping to x-axis: x = %d, y = %d\n", my_point.x, my_point.y); 
    struct point *null_point = NULL;
    drop_to_x_axis(null_point); 

    return 0;
}

    