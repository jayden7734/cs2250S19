/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Calculate the quadrant based on the input angle
 *                  If the angle is 0, print positive x axis
 *                  If the angle is 90, print positive y axis
 *                  If the angle is 180, print negative x axis
 *                  If the angle is 270, print negative y axis
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:37:33 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out -lm
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>  // for fabs
#include <stdlib.h> // for regular abs
// Constants

// Function Prototypes

// Main Function
int main()
{
    int angle;
    
    printf("Please enter an angle:\n");
    scanf("%d",&angle);

    angle = angle % 360;
    if (angle < 0)
    {
        angle = abs(360 + angle);
    }
    
    //Check for angles greater than 360


    if (angle > 0 && angle < 90)
    {
        printf("\nThis is quadrant I.\n");
    }
    else if (angle > 90 && angle < 180)
    {
        printf("\nThis is quadrant II\n");
    }
    else if (angle > 180 && angle < 270)
    {
        printf("\nThis is quadrant III\n");
    }
    else if (angle > 270 && angle < 360)
    {
        printf("\nThis is quadrant IV\n");
    }
    else if (angle == 0 || angle == 90 || angle == 180 || angle == 270)//on axis
    {
        switch(angle)
        {
            case 0:
                printf("\nThe angle is on the positive x axis\n");
                break;
            case 90:
                printf("\nThe angle is on the positive y axis\n");
                break;
            case 180:
                printf("\nThe angle is on the negative x axis\n");
                break;
            case 270:
                printf("\nThe angle is on the negative y axis\n");
                break;
        }
    }
    else 
    {
        printf("\nThis angle is incorrect.\n");
    }
    return 0;
    
}
// Function Definitions


