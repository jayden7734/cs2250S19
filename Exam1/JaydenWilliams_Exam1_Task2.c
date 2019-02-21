/*
 * =====================================================================================
 *
 *       Filename:  JaydenWilliams_Exam1_Task2.c
 *
 *    Description:  Display quotient and power of two numbers
 *
 *        Version:  1.0
 *        Created:  02/21/2019 09:02:40 AM
 *       Revision:  none
 *       Compiler:  gcc JaydenWilliams_Exam1_Task2.c -o JaydenWilliams_Exam1_Task2.out -lm
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes
void divide(double num1, double num2);
float toPower(int num1, int num2);

// Main Function
int main()
{
    int num1, num2;

    printf("Enter the first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    divide(num1, num2);
    printf("%d to the %d power is [%.3f]\n", num1, num2, toPower(num1, num2));

    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  divide
 *  Description:  Divides first number by second
 *  Param:        integers num1, num2
 *  return:       answer to quotient 
 * =====================================================================================
 */
void divide(double num1, double num2)
{
    if(num2 == 0)
    {
        printf("Error -- Division by zero!\n");
        return;
    }
    else
    {
        double answer;

        answer = (num1 / num2);

        printf("%.0lf / %.0lf = %6.3lf\n", num1, num2, answer);

        return;
    }
}
float toPower(int num1, int num2)
{
    return pow (num1, num2);
}

