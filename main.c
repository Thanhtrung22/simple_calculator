
#include "input.h"
#include "cal.h"
#include "main.h"

int main()
{
    uint8_t select = 0;
    char operand = 0;
    uint32_t a, b;
    while (1)
    {
        system("cls");
        menu();

        printf("\nNhap lua chon cua ban(1- 3): ");
        scanf("%hhu", &select);
        while (getchar() != '\n')
            ; // xử lý input nếu đầu vào không phải 1 số hay là nó là kí tự

        switch (select)
        {
        case 1:
        {
            a = get_input_number("Nhap so thu nhat", "Number");
            operand = get_input_operand("Nhap phep toan", "Toan tu nhan duoc");

            b = get_input_number("Nhap so thu hai", "Number");

            switch (operand)
            {
            case '+':
                printf("\n%u + %u = %u", a, b, add(a, b));
                break;
            case '-':
                printf("\n%u - %u = %d", a, b, minus(a, b));
                break;
            case '*':
                printf("\n%u * %u = %llu", a, b, mul(a, b));
                break;
            case '/':
                printf("\n%u / %u = %.2f", a, b, divide(a, b));
                break;
            }
            break;
        }
        case 2:
        {
            a = get_input_number("Nhap so thu nhat", "Number");
            b = get_input_number("Nhap so thu hai", "Number");
            printf("\nUCLN cua %u va %u la %u", a, b, GCD(a, b));
            break;
        }
        case 3:
        {
            printf("\nSee you again");
            return 0;
        }
        default:
            printf("\nNhap sai lua chon");
        }
        getch();
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
