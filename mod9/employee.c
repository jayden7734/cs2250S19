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
#include "employee.h"

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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreateEmployee
 *  Description:  Create empoyee record
 *  Param: Employee structure
 * =====================================================================================
 */
void CreateEmployee(Employee* emp, int idNum)
{
    emp->idNum = idNum;
    emp->payRate = 7.5;
    emp->hours = 20;
    emp->taxRate = TAXRATE1;
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcPay
 *  Description:  Calculate the pay for employee
 *  Param: Employee structure
 * =====================================================================================
 */
void CalcPay(Employee* emp)
{
    // Note: emp is an address(pointer), so if you need to pass it to a function
    // that requires a pointer, then just use the name: emp
    // If you need to pass the VALUES, you need to dereference the reference by 
    // by useing *emp to acces the values at the address
    emp->netPay = CalcNet(*emp);  // pass by value
    emp->grossPay = CalcGross(emp); // pass by reference
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayEmp
 *  Description:  Print pay for employee
 *  Param: Employee structure
 * =====================================================================================
 */
void DisplayEmp(const Employee* emp)
{
    printf("Hi [%d], your net pay for %lf hours at %lf rate is %lf\n",
            emp-> idNum, emp->hours, emp->payRate, emp->netPay);
    printf("Hi [%d], your gross pay for %lf hours at %lf rate is %lf\n",
            emp->idNum, emp->hours, emp->payRate, emp->grossPay);
    return;
}
