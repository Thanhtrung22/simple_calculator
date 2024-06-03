
#include "input.h"
#include "gcd.h"
#include "basic_cal.h"
#include "main.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


mode_fuction mode[] = 
{
    {
        .mode_name = "Calculate basic"
    },
    {
        .mode_name = "Find GCD"
    },
    {
        .mode_name = "Exit"
    }
};
uint8_t mode_size = sizeof(mode) / sizeof(mode[0]);
int main()
{
    uint8_t select = 0;
    while (1)
    {
        system("cls");
        menu();

        printf("\nNhap lua chon cua ban(1- 3): ");
        scanf("%hhu", &select);
        while (getchar() != '\n')
            ; // xử lý input nếu đầu vào không phải 1 số hay là nó là kí tự

        switch(select)
        {
            case 1:
            {
                CAL_BASIC_Launch();
                break;
            }
            case 2:
            {
                GCD_Launch();
                break;
            }
            case 3:
            {
                printf("\nSee you again!");
                return 0;
            }

        }
        printf("\nPress enter to continue...");
        getch();
    }
    return 0;
}

void menu()
{
    printf("\n****************************************************************");
    printf("\n\t\t\tSIMPLE CALCULATION PROGRAM");
    printf("\n*****************************************************************");
    for(uint8_t i = 0; i < mode_size; i++)
    {
        printf("\n\t%u. %s", i + 1, mode[i].mode_name);
    }
  
}
