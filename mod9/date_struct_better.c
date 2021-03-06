/*
 * =====================================================================================
 *
 *       Filename:  date_struct_better.c
 *
 *    Description:  Use a better way to define your structures
 *
 *        Version:  1.0
 *        Created:  03/12/2019 08:54:12 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct_better.c -o date_struct_better.out
 *          Usage:  ./date_struct_better.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants & Global
typedef struct Date
{
    int month;
    int day;
    int year;
}Date;


// Function Prototypes
void Hello_Date(Date d1);  // make sure you define the structure before you call it
// Main Function
int main()
{
    Date d1;
    d1.month = 12;
    d1.day = 23;
    d1.year = 2018;
    Hello_Date(d1);
    return 0;
}
// Function Definitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_Date
 *  Description:  Print the Date structure
 *  Param: Date d1. Param passed by value
 * =====================================================================================
 */
void Hello_Date(Date d1)
{
    printf("D1 month %d day %d year %d\n", d1.month, d1.day, d1.year % 100);
    return;
}


