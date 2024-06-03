#include "basic_cal.h"

#include <stdio.h>
#include "input.h"

void CAL_BASIC_Launch(void)
{
    char operand = 0;
    uint32_t first = 0, second = 0;
    double result = 0;

    first = get_input_number("Nhap so thu nhat", "Number");
    operand = get_input_operand("Nhap phep toan", "Toan tu nhan duoc");
    second = get_input_number("Nhap so thu hai", "Number");

    result = CAL_BASIC_Calculate(first, second, operand);
    CAL_BASIC_Display(first, second, operand, result);
}
double CAL_BASIC_Calculate(uint32_t first, uint32_t second, char operand)
{
    double result = 0;

    switch(operand)
    {
        case '+':
        {
            result = (double)(first + second);
            break;
        }
        case '-':
        {
            result = (double)(first - second);
            break;
        }
        case '*':
        {
            result = (double)(first * second);
            break;
        }
        case '/':
        {
            if(second == 0)
                return 0;
            result = (double)first / second;
            break;
        }
    }
    return result;
}

void CAL_BASIC_Display(uint32_t first, uint32_t second, char operand, double result)
{
    switch(operand)
    {
        case '+':
        {
            printf("\n%u %c %u = %.0lf", first, operand, second, result);
            break;
        }
        case '-':
        {
            printf("\n%u %c %u = %.0lf", first, operand, second, result);
            break;
        }
        case '*':
        {
            printf("\n%u %c %u = %.0lf", first, operand, second, result);
            break;
        }
        case '/':
        {
            printf("\n%u %c %u = %.2lf", first, operand, second, result);
            break;
        }
    }
}