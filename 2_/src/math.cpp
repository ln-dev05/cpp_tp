#include "math.h"
#include "cmath"
long gcd(long a, long b)
{
    if (b == 0) {
        return std::abs(a);
    }
    return gcd(b, a%b);
}