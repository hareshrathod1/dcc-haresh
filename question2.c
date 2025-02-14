/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>



uint8_t pack_date(uint8_t day, uint8_t month) {
    if (day > 31) day = 31;  // Clamp day
    if (month > 7) month = 7; // Clamp month

    return (day << 3) | month;
}

void print_date(uint8_t u) {
    uint8_t day = u >> 3;
    uint8_t month = u & 0x07;

    // Simplified Month Mapping (Adjust as needed):
    const char* month_names[] = {
        "Month 1", "Month 2", "Month 3", "Month 4",
        "Month 5", "Month 6", "Month 7", "Month 8" // Up to 8 months
    };

    if(month > 7){
        printf("Invalid Date\n");
        return;
    }

    if (day > 31) {
        printf("Invalid Date\n");
        return;
    }

    printf("%d %s\n", day, month_names[month]);
}

int main() {
    uint8_t date1 = pack_date(25, 5);
    print_date(date1);

    uint8_t date2 = pack_date(32, 2); // Invalid Date
    print_date(date2);

    uint8_t date3 = pack_date(10, 8); // Invalid Date
    print_date(date3);

    return 0;
}