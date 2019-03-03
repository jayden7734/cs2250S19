/*
 * =====================================================================================
 *
 *       Filename:  soccer.c
 *
 *    Description:  Implementations of the soccer library
 *                  This file does NOT have a main() function
 *                  No prototypes
 *                  Maybe some local constants
 *                  Include your header file "soccer.h"
 *        Version:  1.0
 *        Created:  02/28/2019 09:44:05 AM
 *       Revision:  none
 *       Compiler:  
 *          Usage:  ./soccer.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "soccer.h"    //header file

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetUserNumberAndRating
 *  Description:  Asks for user input for player number and rating
 *        Param:  nums, ratings
 * =====================================================================================
 */
void GetUserNumberAndRating(int nums[], int ratings[])
{
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Enter player %d's jersey number:\n", (i + 1));
        scanf("%d", &(nums[i]));

        printf("Enter player %d's rating:\n", (i + 1));
        scanf("%d", &(ratings[i]));
        printf("\n");
    }
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayRoster
 *  Description:  Display current roster info
 *  Param:        nums: player numbers
 *  Param:        ratings: player ratings
 * =====================================================================================
 */
void DisplayRoster(int nums[], int ratings[])
{
    printf("ROSTER\n");
    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), nums[i], ratings[i]);
    }
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayMenu
 *  Description:  shows menu for user input options
 * =====================================================================================
 */
char DisplayMenu()
{
    char input;
    printf("\nMENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");
    printf("\nChoose an option:\n");
    scanf(" %c", &input);

    return input;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePlayerRating
 *  Description:  User can change a rating for a player
 * =====================================================================================
 */
void UpdateRating(int nums[], int ratings[]) 
{
    int playerJersy, playerRating;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);
    printf("Enter a new rating for player:\n");
    scanf("%d", &playerRating);

        for (int i = 0; i < NUM_PLAYERS; ++i) 
        {
            if (nums[i] == playerJersy) 
            {
                ratings[i] = playerRating;
            }
        }
        return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayRosterAboveRating
 *  Description:  Output players above given user rating
 * =====================================================================================
 */
void DisplayPlayersAboveRating(int nums[], int ratings[])
{
    int playerRating; 
    printf("Enter a rating:\n");
     scanf("%d", &playerRating);

     printf("\nABOVE %d\n", playerRating);
     for (int i = 0; i < NUM_PLAYERS; ++i) 
     {
         if (ratings[i] > playerRating) 
         {
             printf("Player %d -- Jersey number: %d, Rating: %d\n", 
                     (i + 1), nums[i], ratings[i]);
         }
     }
     return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ReplacePlayer
 *  Description:  User can replace a player with new player
 * =====================================================================================
 */
void ReplacePlayer(int nums[], int ratings[])
{
    int playerRating, playerJersy;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);

        int j = -1;  // Default index for player replacement
        for (int i = 0; i < NUM_PLAYERS; ++i) 
            {
                if (playerJersy == nums[i]) 
                {
                    j = i;
                }
            }

            // Replace player only if the player is in the roster
            if (j != -1) 
            {
                printf("Enter a new jersey number:\n");
                scanf("%d", &playerJersy);

                printf("Enter a rating for the new player:\n");
                scanf("%d", &playerRating);

                nums[j] = playerJersy;
                ratings[j] = playerRating;
            }
        return;
}

