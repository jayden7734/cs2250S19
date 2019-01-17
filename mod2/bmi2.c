/*
 * =====================================================================================
 *
 *       
 *       Filename:  bmi2.c
 *
 *    Description:  Calculate the BMI with floating points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:35 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2 -lm
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()

{
    //BMI = weight/height*2
    //1) Capture user input: weight and height
    //2) Calculate the BMI
    //3) Display the BMI
    //
    double weight = 0;
    double height = 0;
    double bmi = 0;

    printf("Please enter you weight in kilos.\n");
    scanf("%lf",&weight);
    printf("Enter your height in meters\n");
    scanf("%lf",&height);

    bmi = weight / pow (height, 2);

    printf("If your weight is %lf kgs and you height is %lf meters, your BMI is %lf\n",weight,height,bmi);

    return 0;
}
// Function Definitions


