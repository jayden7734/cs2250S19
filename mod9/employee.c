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
    double netPay;
    double taxRate;
    double grossPay;
}Employee;

#define TAXRATE1 0.1
#define TAXRATE2 0.25
#define TAXRATE3 0.75

// Function Prototypes
double CalcNet(Employee emp);  // pass by value
double CalcGross(Employee* emp);  // pass by reference

// Main Function
int main()
{
    Employee waldo = {1, 7.5, 20};
    waldo.taxRate = TAXRATE1;
    waldo.netPay = CalcNet(waldo);
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, waldo.netPay);
    // Set tax rate
    waldo.grossPay = CalcGross(&waldo);  // pass by reference
    printf("Hi Waldo, your gross pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, waldo.grossPay);
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
    return emp.payRate * emp.hours * (1 - emp.taxRate);
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcGross
 *  Description:  Calculate the gross pay based on payrate and hours
 *  Param: Employee structure
 *  Return: Gross pay as double 
 * =====================================================================================
 */

double CalcGross(Employee* emp)  // pass by reference
{
    // to acces structure members when using a pointer use the dereference
    // operator ->
    return emp->payRate * emp->hours;
}
