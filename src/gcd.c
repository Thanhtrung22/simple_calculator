#include "gcd.h"

#include <stdio.h>
#include "input.h"

void GCD_Launch(void)
{
    uint32_t first = 0, second = 0;
    uint32_t result = 0;

    first = get_input_number("Nhap so thu nhat", "Number");
    second = get_input_number("Nhap so thu hai", "Number");
    result = GCD_Calculate(first, second);
    GCD_Display(first, second, result);

}

uint32_t GCD_Calculate(uint32_t first, uint32_t second)
{
    uint32_t ucln = 0;
    uint32_t min = first < second ? first : second;

    for (uint32_t i = min; i >= 1; i--) // nếu để i = 2; i <= min; i++ thì vòng lặp sẽ chạy nhiều hơn cần thiết
    {
        if (first % i == 0 && second % i == 0)
        {
            ucln = i;
            break;
        }
    }
    return ucln;
}

void GCD_Display(uint32_t first, uint32_t second, uint32_t result)
{
    printf("\nUCLN cua %u va %u la %u", first, second, result);
}