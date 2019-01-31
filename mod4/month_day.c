/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:18:32 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define JANUARY     1
#define FEBRUARY    2
#define MARCH       3
#define APRIL       4
#define MAY         5
#define JUNE        6
#define JULY        7
#define AUGUST      8
#define SEPTEMBER   9
#define OCTOBER     10
#define NOVEMBER    11
#define DECEMBER    12
// Function Prototypes

// Main Function
int main()
{
    int month;
    int day;
    char answer;
    while(1)
    {
        // Capture user input
        printf("Enter the month (1-12):\n");
        scanf("%d", &month);
        printf("Enter the day (1-31):\n");
        scanf("%d", &day);
        // Use IF to validate month
        if (month > 12 || month < 1)
        {
            printf("Number is out of range (1-12).\n");
        }
        switch(month)
        {
            //months with 31 days
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                if(day >31 || day < 0)
                {
                    printf("Invalid day\n");
                    return 1;// ends code at this point
                }
                break;
                //months with 30 days
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                if(day >30 || day < 0)
                {
                    printf("Invalid day\n");
                    return 1;
                }
                break;
            case FEBRUARY:
                if(day >28 || day < 0)
                {
                    printf("Invalid day\n");
                    return 1;
                }
                break;
        }
        printf("You enter a valid month[%d] and day[%d]\n", month,day);

        printf("Do you want to continue [y/n]:\n");
        scanf(" %c", &answer);
        if (answer != 'y' && answer != 'Y')
        {
            printf("Your answer is [%c].\n", answer);
            break;//exit loop
        }

        // Use SWITCH to validate the day of month
    } // end of while loop
    printf("\nGoodbye\n");
    return 0;
}
// Function Definitions


