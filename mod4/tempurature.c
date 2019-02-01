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
#define CELCIUS 0
#define FAHRENHEIT 1
#define BOIL_C 100
#define BOIL_F 212
#define FREEZE_C 0
#define FREEZE_F 32
#define BOIL 1
#define LIQUID 2
#define ICE 3
// Function Prototypes

// Main Function
int main()
{
    int choice;
    double in_temp;
    double out_temp;
    int water_state = 0;
    printf("Welcome to the tempurature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit:\n");
    
    scanf("%d", &choice);

    if( choice == FAHRENHEIT) {
        printf("Enter the tempurature in Fahrenheit:\n");
        scanf("%lf",&in_temp);

        out_temp = (in_temp-32)*(5.0/9.0);
        printf("The tempurature in celcius is %lf\n",out_temp);
    }
    else if (choice == CELCIUS) {
        
        printf("Enter the tempurature in celsius:\n");
        scanf("%lf",&in_temp);
        out_temp = (in_temp * 9.0/5.0)+32;
        printf("The tempurature in Fahrenheit is %lf\n", out_temp);

    }
    else {
        
        
        printf("Sorry, you did not enter 0 or 1\n");
        return 1;
    }
        

//Task 2
//Test for boiling point, freezing point, and liquid state

    if(choice == FAHRENHEIT) 
    {
        if (in_temp > BOIL_F) 
        {
            water_state = BOIL;
        }
        else if (in_temp > FREEZE_F && in_temp < BOIL_F)
        {
            water_state = LIQUID;
        }
        else 
        { 
            water_state = ICE;
        }
    }

 
    else
    {
        if (in_temp > BOIL_C) 
        {
            water_state = BOIL;
        }
    
        else if (in_temp > FREEZE_C && in_temp < BOIL_C)
        {
            water_state = LIQUID;
        }
        else
        {
            water_state = ICE;
        }
    }
    // Switch
    switch (water_state)
    {
        case BOIL:
            printf("Your water is boiling\n");
            break;
        case LIQUID:    
            printf("Your water is liquid\n");
            break;
        case ICE:
            printf("Your water is frozen\n");
            break;
    }
            return 0;
}
// Function Definitions


