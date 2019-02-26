/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:41:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void DisplayOrigPosition(double* x, double* y);
void UpdatePosition(double* x, double* y, double new_x, double new_y);
// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3)
    {

        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }
    x = atof(argv[1]);  // convert the first input param to double
    y = atof(argv[2]);  // convert the second input param to double
    printf("Your current position address is (%p, %p)\n", &x, &y);
    DisplayOrigPosition(&x, &y);  // takes two addresses of type double
    UpdatePosition(&x, &y, 2.0, 4.1);
    DisplayPosition(x, y);
    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayPosition
 *  Description:  Display current point position
 *  Param: x => x coordinate
 *  Param: y => y coordinate
 *  Returns: nothing
 * =====================================================================================
 */
void DisplayPosition(double x, double y)
{
    printf("Your current position is (%4.2lf,%4.2lf)\n", x,y);
    printf("Your current position address is (%p, %p)\n", &x, &y);
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePosition
 *  Description:  Update point position
 *  Param: x => x coordinate
 *  Param: y => y coordinate
 *  Param: x_new => new x coordinate
 *  Param: y_new => new y coordinate
 *  Returns: nothing
 * =====================================================================================
*/
void UpdatePosition(double* x, double* y, double new_x, double new_y)
{
    printf("******Updating position******\n");
    *x = new_x; // Dereference the pointer to update the value
    *y = new_y;
    printf("******Done updating position******\n");
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayOrigPosition
 *  Description:  Display original point position of actual values
 *  Param: x => x coordinate
 *  Param: y => y coordinate
 *  Returns: nothing
 * =====================================================================================
 */
void DisplayOrigPosition(double* x, double* y)
{
    printf("Your current original address is (%p, %p)(orig)\n", x,y);
    // to display the values of pointers/addresses use the reference operator "*", only for pointer
    printf("Your current position address is (%4.2lf,%4.2lf)(orig)\n", *x, *y);
    return;
}
