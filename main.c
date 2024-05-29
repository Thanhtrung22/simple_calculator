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
        
        
            printf("\nNhap lua chon cua ban(1- 3): ");
            scanf("%hhu", &select);
            while(getchar() != '\n'); // xử lý input nếu đầu vào không phải 1 số hay là nó là kí tự
       
        
        switch (select)
        {
        case 1:
        {
            input(&a, &b);
            printf("Nhap phep toan: ");
            scanf("%c", &operand);
            while ((getchar()) != '\n');

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
        default:
            printf("\nNhap sai lua chon");
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
    int n = 0;
    do
    {
         printf("Nhap so thu nhat: ");
         n = scanf("%u", a);
         while(getchar() != '\n');
        printf("\n n = %d\n", n);
    }while(n ==  0);
   
    
    
    printf("Nhap so thu hai: ");
    n = scanf("%u", b);
    printf("\n n = %d\n", n);
    while(getchar() != '\n');
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