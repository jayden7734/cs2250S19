/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:35 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi
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
    //BMI = weight/height*2
    //1) Capture user input: weight and height
    //2) Calculate the BMI
    //3) Display the BMI
    //
    int weight = 0;
    int height = 0;
    int bmi = 0;

    printf("Please enter you weight in kilos.\n");
    scanf("%d",&weight);
    printf("Enter your height in meters\n");
    scanf("%d",&height);

    bmi = weight / (height * height);

    printf("If your weight is %d kgs and you height is %d meters, your BMI is %d\n",weight,height,bmi);

    return 0;
}
// Function Definitions


