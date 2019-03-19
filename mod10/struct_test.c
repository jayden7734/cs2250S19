/*
 * =====================================================================================
 *
 *       Filename:  struct_test.c
 *
 *    Description:  Define a structure with pointers
 *
 *        Version:  1.0
 *        Created:  03/19/2019 08:52:50 AM
 *       Revision:  none
 *       Compiler:  gcc struct_test.c -o struct_test.out
 *          Usage:  ./struct_test.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
typedef struct Test
{
    int idNum;
    double* ptPay;  //store an address of a double
}Test;

// Function Prototypes

// Main Function
int main()
{
    Test emp;
    double pay = 456.23;

    emp.idNum = 12345;
    emp.ptPay = &pay;  //address of pay

    printf("Employee %d was paid $%6.2lf\n", emp.idNum, *emp.ptPay);

    return 0;
}
// Function Definitions


