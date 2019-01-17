/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Play with float points
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:44 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
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
    float temp = 7.9; //Celsius
    double tempf = 0;
    // For floats use the %f placeholder
    // For doubles use the %lf placeholder
    printf("The tempurature is %f Celcius.\n", temp);
    printf("What is the tempurature in Ogden in Celcius: ");

    scanf("%f", &temp);
    tempf = (temp * 9/5) + 32;
    printf("I see, your temp is %lf in F.\n", tempf);
    return 0;
}
// Function Definitions


