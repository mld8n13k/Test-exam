#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {

    if (a != 0 && a*b >= UINT_MAX) {
        return UINT_MAX;
    }
    return a * b;
}
