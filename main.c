#include <stdio.h>
#include <stdint.h>
#include <math.h>
int32_t add(int32_t a, int32_t b);
int32_t minus(int32_t a, int32_t b);
float div(int32_t a, int32_t b);
int32_t mul(int32_t a, int32_t b);
void menu();
void input(int32_t *a, int32_t *b);
int32_t GCD(int32_t a, int32_t b);
int32_t main()
{
    uint8_t select = 0;
    char operand = 0;
    int32_t a, b;
    while(1)
    {
        //system("cls");
        menu();
        printf("\nNhap lua chon cua ban: ");
        scanf("%hhu", &select);
        switch(select)
        {
            case 1:
            {
                input(&a, &b);
                printf("Nhap phep toan: ");
                while((getchar()) !='\n');
                scanf("%c", &operand);
                switch(operand)
                {
                    case '+':
                        printf("%d + %d = %d", a, b, add(a, b));
                        break;
                    case '-':
                        printf("%d - %d = %d", a, b, minus(a, b));
                        break;
                    case '*':
                        printf("%d * %d = %d", a, b, mul(a, b));
                        break;
                    case '/':
                        printf("%d / %d = %.2f", a, b, div(a, b));
                        break;
                    default: 
                        printf("\nNhap sai phep toan");
                }
                break;
            }
            case 2:
            {
                input(&a, &b);
                printf("UCLN cua %u va %u la %u", a, b, GCD(a,b));
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
void input(int32_t *a, int32_t *b)
{
    printf("Nhap so thu nhat: ");
    scanf("%d", a);
    printf("Nhap so thu hai: ");
    scanf("%d", b);
}

int32_t add(int32_t a, int32_t b)
{
    return a + b;
}

int32_t minus(int32_t a, int32_t b)
{
    return a - b;
}

int32_t mul(int32_t a, int32_t b)
{
    return a * b;
}

float div(int32_t a, int32_t b)
{
    
    return (float)a / (float)b;
}

int32_t GCD(int32_t a, int32_t b)
{
    int32_t ucln = 0;
    int32_t min = a < b ? a : b;
    
    for(int32_t i = 1; i <= abs(min); i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            ucln = i;
        }
    }
    return ucln;
}