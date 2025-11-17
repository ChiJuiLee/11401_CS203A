/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h
    -

   Developer: CHIJUILEE <ready950110@gmail.com>
 */

#include "hash_fn.h"
#include "math.h"
int myHashInt(int key, int m) {
    const double g = 0.618; //  1/Golden Ratio. golden ration:(sqrt(5)-1)/2
    double frac = (key * g) - floor(key * g);
    return (int)floor(m * frac);
}

int myHashString(const char* str, int m) {
    unsigned long hash = 5381;
    while(*str)
    {
        hash = ((hash << 5) + hash) + (*str);
        str++;
    }
    return (int)(hash % m);  // basic division method
}
