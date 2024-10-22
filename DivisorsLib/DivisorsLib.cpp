#include <vector>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;
    for (unsigned long long i = 1; i * i <= number; ++i)
    {
        // Faster algorithm: only iterate up to the square root of number
        if (number % i == 0)
        {
            result.push_back(i); // i is a divisor
            if (i != number / i) // To avoid adding the same divisor twice
            {
                result.push_back(number / i); // number / i is also a divisor
            }
        }
    }
    return result;
}