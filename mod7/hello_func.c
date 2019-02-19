/*
 * =====================================================================================
 *
 *       Filename:  hello_func.c
 *
 *    Description:  Practice functions
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:48:20 AM
 *       Revision:  none
 *       Compiler:  gcc hello_func.c -o hello_func.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello_World();
void Hello_Number(int num);
int Get_Square(int num);
int Get_Number();
int Get_Sum(int num1, int num2);
double Get_BMI(double weight, double height);

// Main Function
int main()
{
    int i1 = 23;
    int num1, num2;
    Hello_World();
    Hello_Number(i1);

    i1 = Get_Square(i1);
    Hello_Number(i1);

    i1 = Get_Number();
    Hello_Number(i1);

    num1 = Get_Number();
    Hello_Number(num1);
    num2 = Get_Number();
    Hello_Number(num2);
    // Get_Sum(num1, num2);
    Hello_Number(Get_Sum(num1, num2));

    double bmi = Get_BMI(65.8, 1.89);
    printf("Your BMI is[%lf]\n", bmi);
    return 0;
}
// Function Definitions
//To document your functions type: ,cfu
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_world
 *  Description:  Print Hello world message
 * =====================================================================================
 */
void Hello_World()
{
    printf("Hello World\n");
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_Number
 *  Description:  Prints the value of a number
 *  Param:        num => interger value
 *  Return:       nothing
 * =====================================================================================
 */
void Hello_Number(int num)
{
    printf("Hello %d number\n", num);
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Square
 *  Description:  get the square of a number
 *  Param: num=> interger value
 *  return: the square of num
 * =====================================================================================
 */
int Get_Square(int num)
{
    int square;
    //Algorithm
    square = num * num;
    return square;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Number
 *  Description:  Ask user to enter an integer
 *  Param: None
 *  Return: User int input
 * =====================================================================================
 */
int Get_Number()
{
    int userNum;
    printf("Enter an integer:\n");
    scanf("%d", &userNum);

    return userNum;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Sum
 *  Description:  Return sum of two int
 *  Param: int1, int2
 *  Return: First + Second
 * =====================================================================================
 */
int Get_Sum(int num1, int num2)
{
    return num1 + num2;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_BMI
 *  Description:  Calculate the body max index(weight/height^2)
 *  param: Weight(kg), Height(m)
 *  return: BMI
 *
 * =====================================================================================
 */
double Get_BMI(double weight, double height)
{
    double BMI;
    BMI = weight/(height * height);
    return BMI;
}
