/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  guessing game
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:44 AM
 *       Revision:  none
 *       Compiler:  gcc guessNumber.c -o guessNumber.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for random function rand(), srand()
#include <time.h>   // time()
// Constants
#define MAX 5 
#define LIMIT 100
// Function Prototypes

// Main Function
int main()
{
    int number,guess;
    srand(time(0));             // set the random SEED to current time
    guess = rand() % LIMIT ;        // set random number between 0-9
    //int i; before C89 you need to define i outside loop
    for(int i = 0; i < MAX; i++)
    {
        printf("Please guess a number between 0 and %d\n",LIMIT-1);
        printf("You have %d opportunities left\n",MAX-i);
        scanf("%d", &number);
        if(number == guess)
        {
            printf("Congradulations, you got the correct number\n");
            return 0;
        }
        else if(number < guess)
        {
            printf("Higher\n");
        }
        else
        {
            printf("Lower\n");
        }
    }
    printf("Sorry, you did not get the number[%d].\n Try again.\n",guess);
        
    return 0;
}
// Function Definitions


