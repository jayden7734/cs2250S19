/*
 * =====================================================================================
 *
 *       Filename:  use_employee.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/12/2019 10:14:55 AM
 *       Revision:  none
 *       Compiler:  gcc use_employee.c employee.c -o use_employee.out
 *          Usage:  ./use_employee.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

#define TOTAL 5
// Main Function
int main(int argc, char* argv[])
{
    Employee students[TOTAL];
    for(int i = 0; i < TOTAL; i++)
    {
        CreateEmployee(students, i+1);
        CalcPay(students);
        DisplayEmp(students);
    }
    return 0;
}


