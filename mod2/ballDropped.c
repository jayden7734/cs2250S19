/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    Description:  Distance traveled by ball at certain time. Initial Velocity = 0
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:06:48 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double GRAVITY = 9.8; // m/s^2
const double BUILDING = 100;
// Function Prototypes

// Main Function
int main()
{
    double distance = 0;
    double time = 0;
    double fromGround; 
    //Formula: s = 0.5 g t^2
    printf("Enter the time in seconds\n");
    scanf("%lf", &time);
    distance = (0.5 * GRAVITY * pow(time,2));
    fromGround = BUILDING - distance;
    printf("After %lf seconds it has fallen %lf meters, and it is %lf meters from the ground.\n",time,distance,fromGround);
    return 0;
}
// Function Definitions


