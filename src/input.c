#include "input.h"
#include <stdio.h>

char get_input_operand(char *inform, char *conform)
{
    char operand = '\0';
    do
    {
        printf("\n%s: ", inform);
        scanf("%c", &operand);
        printf("\n%s: %c", conform, operand);
        while (getchar() != '\n')
            ;

    } while (operand != '+' && operand != '-' && operand != '*' && operand != '/');

    return operand;
}
uint32_t get_input_number(char *input_inform, char *confirm)
{
    int32_t check_scanf = 0;
    uint32_t number = 0;
    do
    {
        printf("\n%s: ", input_inform);
        check_scanf = scanf("%u", &number);
        printf("\n%s = %d", confirm, number);
        while (getchar() != '\n')
            ;

    } while (check_scanf == 0);
    return number;
}
