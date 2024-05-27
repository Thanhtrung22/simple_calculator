#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <ctype.h>
uint32_t add(uint32_t a, uint32_t b);
uint32_t minus(uint32_t a, uint32_t b);
float div(uint32_t a, uint32_t b);
uint64_t mul(uint32_t a, uint32_t b);
void menu();
void input(uint32_t *a, uint32_t *b);
uint32_t GCD(uint32_t a, uint32_t b);

int main()
{
    uint8_t select = 0;
    char operand = 0;
    uint32_t a, b;
    while (1)
    {
        // system("cls");
        menu();
        printf("\nNhap lua chon cua ban: ");
        scanf("%hhu", &select);
        switch (select)
        {
        case 1:
        {
            input(&a, &b);
            printf("Nhap phep toan: ");
            while ((getchar()) != '\n')
                ;
            scanf("%c", &operand);
            switch (operand)
            {
            case '+':
                printf("%u + %u = %u", a, b, add(a, b));
                break;
            case '-':
                printf("%u - %u = %d", a, b, minus(a, b));
                break;
            case '*':
                printf("%u * %u = %llu", a, b, mul(a, b));
                break;
            case '/':
                printf("%u / %u = %.2f", a, b, div(a, b));
                break;
            default:
                printf("\nNhap sai phep toan");
            }
            break;
        }
        case 2:
        {
            input(&a, &b);
            printf("UCLN cua %u va %u la %u", a, b, GCD(a, b));
            break;
        }
        case 3:
        {
            printf("\nSee you again");
            return 0;
        }
        }
    }
    return 0;
}

void menu()
{
    printf("\n****************************************************************");
    printf("\n\t\t\tSIMPLE CALCULATION PROGRAM");
    printf("\n*****************************************************************");
    printf("\n\n\t1.Calculate basic");
    printf("\n\t2.Find GCD");
    printf("\n\t3. Exit");
}
void input(uint32_t *a, uint32_t *b)
{
    printf("Nhap so thu nhat: ");
    scanf("%u", a);
    
    printf("Nhap so thu hai: ");
    scanf("%u", b);
}

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

float div(uint32_t a, uint32_t b)
{

    return (float)a / (float)b;
}

uint32_t GCD(uint32_t a, uint32_t b)
{
    uint32_t ucln = 0;
    uint32_t min = a < b ? a : b;

    for (uint32_t i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            ucln = i;
            break;
        }
    }
    return ucln;
}