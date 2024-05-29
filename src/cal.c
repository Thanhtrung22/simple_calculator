#include "cal.h"


uint32_t add(uint32_t a, uint32_t b)
{
    return a + b;
}

uint32_t minus(uint32_t a, uint32_t b)
{
    return a - b;
}

uint64_t mul(uint32_t a, uint32_t b)
{
    return a * b;
}

float divide(uint32_t a, uint32_t b)
{

    return (float)a / (float)b;
}

uint32_t GCD(uint32_t a, uint32_t b)
{
    uint32_t ucln = 0;
    uint32_t min = a < b ? a : b;

    for (uint32_t i = min; i >= 1; i--) // nếu để i = 2; i <= min; i++ thì vòng lặp sẽ chạy nhiều hơn cần thiết
    {
        if (a % i == 0 && b % i == 0)
        {
            ucln = i;
            break;
        }
    }
    return ucln;
}