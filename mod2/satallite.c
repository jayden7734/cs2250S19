/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  Calculate altitude of Satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:46:58 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double G = 6.67e-11; // Newton's constant (m^3 kg^-1 s^-2)
const double E_MASS = 5.97e24; // Earth's mass (kg)
const double E_RADIUS = 6371e3;
const double PI = 3.1415941;
// Function Prototypes

// Main Function
int main()
{
    double time = 0;
    double height = 0;
    //1)Enter the period
    //2)Calculate Height = [(G M T^2)/(4PI^2)]^1/3 - R
    //3)Display result
    printf("Enter the period in seconds\n");
    scanf("%lf",&time);
  //  height = G * E_MASS * pow(time,2);
   // height = height/ (4 * pow(PI,2));
//    height = pow(height, 1/3);
    
   // height = pow(height, 1/3);
   // height = height - E_RADIUS;
    height = cbrt((G * E_MASS * pow(time,2)) / (4 * pow(PI,2))) - E_RADIUS;
    printf("At %lf seconds, the satellite will be %lf meters above Earth\n",time,height);

    return 0;
}
// Function Definitions


