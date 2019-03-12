/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee structure for record keeping
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:01 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out
 *          Usage:  ./employee.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & Global
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;

}Employee;
// Function Prototypes
double CalcNet(Employee emp);  // pass by value
// Main Function
int main()
{
    double netPay = 0;
    Employee waldo = {1, 7.5, 20};
    netPay = CalcNet(waldo);
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, netPay);
    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcNet
 *  Description:  Calculate the net pay based on payrate and hours
 *  Param: Employee structure
 *  Return: Net pay as double 
 * =====================================================================================
 */
double CalcNet(Employee emp)
{
    return emp.payRate * emp.hours;
}
