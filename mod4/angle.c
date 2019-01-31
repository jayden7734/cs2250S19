/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Calculate the quadrant based on the input angle
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:37:33 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int angle;
    
    printf("Please enter an angle:\n");
    scanf("%d",angle);

    if (angle > 0 && angle < 90)
    {
        printf("This is quadrant 1.\n");
    }
    
    return 0;
}
// Function Definitions


