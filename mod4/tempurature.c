/*
 * =====================================================================================
 *
 *       Filename:  tempurature.c
 *
 *    Description:  tempurature conversion
 *
 *        Version:  1.0
 *        Created:  01/29/2019 08:45:15 AM
 *       Revision:  none
 *       Compiler:  gcc tempurature.c -o tempurature.out
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
    int choice;
    double in_temp;
    double out_temp;
    
    printf("Welcome to the tempurature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit:\n");
    
    scanf("%d", &choice);

    if( choice == 0) {
        printf("Enter the tempurature in Fahrenheit:\n");
        scanf("%lf",&in_temp);

        out_temp = (in_temp-32)*(5/9);
        printf("The tempurature in celcius is %lf\n",out_temp);
    }
    else if (choice == 1) {
        
        printf("Enter the tempurature in celsius:\n");
        scanf("%lf",&in_temp);
        out_temp = (in_temp * 9/5)+32;
        printf("The tempurature in Fahrenheit is %lf\n", out_temp);

    }
    else {
        printf("Sorry, you did not enter zero or one\n");
    }
        return 0;
}
// Function Definitions


