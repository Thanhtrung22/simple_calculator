#ifndef GCD_H
#define GCD_H


#include <stdint.h>


uint32_t GCD(uint32_t a, uint32_t b);

void GCD_Launch(void); // nếu không có tham số thì nên để void trong dấu ngoặc
uint32_t GCD_Calculate(uint32_t first, uint32_t second);
void GCD_Display(uint32_t first, uint32_t second, uint32_t result);
#endif