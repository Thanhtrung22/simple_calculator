#include "input.h"

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
void input(uint32_t *a, uint32_t *b)
{
    int32_t check_scanf = 0;
    do
    {
        printf("Nhap so thu nhat: ");
        check_scanf = scanf("%u", a);
        while (getchar() != '\n')
            ;

    } while (check_scanf == 0);

    do
    {
        printf("Nhap so thu hai: ");
        check_scanf = scanf("%u", b);
        while (getchar() != '\n')
            ;

    } while (check_scanf == 0);
}
