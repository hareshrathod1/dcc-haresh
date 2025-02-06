/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stddef.h> // For size_t

struct person {
    char name[50]; // Added a name for completeness
    int age;
};

double average_age(struct person *ps, int n) {
    if (ps == NULL || n <= 0) {
        return 0.0; // Handle invalid input (null pointer or empty array)
    }

    double sum = 0.0; // Use double for sum to avoid potential integer overflow
    for (size_t i = 0; i < n; ++i) {
        sum += ps[i].age;
    }

    return sum / n; // Return a double for the average
}

int main() {
    struct person people[] = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22},
        {"David", 28}
    };
    int num_people = sizeof(people) / sizeof(people[0]);

    double avg_age = average_age(people, num_people);

    printf("Average age: %.2f\n", avg_age); // Format the output

    // Test with an empty array:
    struct person empty_array[0];
    int empty_size = sizeof(empty_array) / sizeof(empty_array[0]);
    double avg_empty = average_age(empty_array, empty_size);
    printf("Average age of empty array: %.2f\n", avg_empty); // Output will be 0.0

    // Test with NULL
    double avg_null = average_age(NULL, 5);
    printf("Average age of NULL: %.2f\n", avg_null); // Output will be 0.0

    return 0;
}