#include <vector>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;
    for (unsigned long long i = 1; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            result.push_back(i); 
            if (i != number / i) 
            {
                result.push_back(number / i); 
            }
        }
    }
    return result;
}
