/*
 * =====================================================================================
 *
 *       Filename:  JaydenWilliams_Exam1_Task1.c
 *
 *    Description:  Tells you what you can buy with a given amount of money.
 *
 *        Version:  1.0
 *        Created:  02/21/2019 08:38:09 AM
 *       Revision:  none
 *       Compiler:  gcc JaydenWilliams_Exam1_Task1.c -o JaydenWilliams_Exam1_Task1.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Purchase_opt(float money);

// Main Function
int main()
{
    float Num_Money;
    printf("How much money do you want to earn next year?\n");
    scanf("%f", &Num_Money);
    Purchase_opt(Num_Money);
    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Purchase_opt
 *  Description:  Gives purchase option for given amount of money
 *  Param:        Double Num_Money
 *  Return:       None
 * =====================================================================================
 */
void Purchase_opt(float money)
{
    if(money <= 5000)
    {
        printf("With this amount of money %6.2f you can buy a TV.\n", money);
    }
    else if(money <= 10000 && money > 5000)
    {
        printf("With this amount of money %6.2f you can buy a RTV.\n", money);
    }
    else if(money > 10000 && money <= 50000)
    {
        printf("With this amount of money %6.2f you can buy a car.\n", money);
    }
    else
    {
        printf("With this amount of money %6.2f you can buy a small house.\n", money);
    }
    return;

}
        
        
