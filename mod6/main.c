/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/16/2019 12:09:41 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -Wall -o a.out -lm
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM_WEIGHTS 5
// Function Prototypes

// Main Function
int main()
{
    double weight[5],sumWeight, maxWeight;

    for(int i = 0; i < NUM_WEIGHTS; i++)
    {
        printf("Enter weight %d:\n", i+1);
        scanf(" %lf", (&weight[i]));
    }
    printf("You entered: ");
    maxWeight = weight[0];
    for(int i = 0; i < NUM_WEIGHTS; i++)
    {
        printf("%6.2lf ", weight[i]);
        sumWeight += weight[i];
        if(weight[i] > maxWeight)
        {
            maxWeight = weight[i];
        }
    }
    printf("\n\nTotal weight: %6.2lf\n", sumWeight);
    printf("Average weight: %6.2lf\n", sumWeight/NUM_WEIGHTS);
    printf("Max weight: %6.2lf\n", maxWeight);
    return 0;
}
// Function Definitions


