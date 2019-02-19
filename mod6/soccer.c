/*
 * =====================================================================================
 *
 *       Filename:  soccer.c
 *
 *    Description:  Store roster and rating info for a soccer team
 *
 *        Version:  1.0
 *        Created:  02/19/2019 12:19:37 PM
 *       Revision:  none
 *       Compiler:  gcc soccer.c -Wall -o soccer.out -lm
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants
#define NUM_PLAYERS 5
#define JERSEY_MIN 0
#define JERSEY_MAX 99
#define RAT_MIN 1
#define RAT_MAX 9
// Function Prototypes

// Main Function
int main()
{
    int jersey[NUM_PLAYERS];
    int rating[NUM_PLAYERS];
    int i;
    char menuChoice;

    for(i = 0; i < NUM_PLAYERS; i++)
    {
        printf("Enter player %d's jersey number:\n", i + 1);
        scanf("%d", &jersey[i]);

        printf("Enter player %d's rating:\n", i + 1);
        scanf("%d", &rating[i]);
        printf("\n");
    }
    printf("ROSTER\n");
    for(i = 0; i < NUM_PLAYERS; i++)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n",
                i + 1, jersey[i], rating[i]);
    }
    
    printf("\nMENU\nu - Update player rating\na - Output players above a rating\nr - Replace player\no - Output roster\nq - Quit\n\nChoose an option:\n");
    scanf(" %c", &menuChoice);

    if(menuChoice == 'u')
    {
        printf("HI\n");
    }
    return 0;
}
// Function Definitions


