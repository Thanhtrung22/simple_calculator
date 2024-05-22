#include <stdio.h>

int add(int a, int b);
int minus(int a, int b);
int div(int a, int b);
int mul(int a, int b);
void menu();
int GCD(int a, int b);
int main()
{

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

int add(int a, int b)
{
    return a + b;
}

int min(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return (float) a /b;
}

int GCD(int a, int b)
{
    int ucln = 0;
    int min = a < b ? a : b;
    if(min < 0)
    {
        min = -min;
    }
    for(int i = 1; i <= min; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            ucln = i;
        }
    }
    return ucln;
}