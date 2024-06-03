#ifndef BASIC_CAL_H
#define BASIC_CAL_H


#include <stdint.h>

double add(uint32_t a, uint32_t b);
uint32_t minus(uint32_t a, uint32_t b);
uint64_t mul(uint32_t a, uint32_t b);
double divide(uint32_t a, uint32_t b);
uint32_t GCD(uint32_t a, uint32_t b);

void CAL_BASIC_Launch(void); // nếu không có tham số thì nên để void trong dấu ngoặc
double CAL_BASIC_Calculate(uint32_t first, uint32_t second, char operand);
void CAL_BASIC_Display(uint32_t first, uint32_t second, char operand, double result);
#endif