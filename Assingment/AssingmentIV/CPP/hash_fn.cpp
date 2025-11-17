/*
   ========================================
   hash_fn.cpp ??? implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/17: Initial implementation

   Developer: CHIJUILEE <ready950110@gmail.com>
 */
#include <string>
#include <cmath>
int myHashInt(int key, int m) {
    const double g = 0.618; //  1/Golden Ratio. golden ration:(sqrt(5)-1)/2
    double frac = (key * g) - floor(key * g);
    return static_cast<int>(floor(m * frac));
}

int myHashString(const std::string& str, int m) {
    unsigned long hash = 5381;
    for(char c : str)
    {
        hash = ((hash << 5) + hash) + c;
    }
    return static_cast<int>(hash % m);  // basic division method
}
