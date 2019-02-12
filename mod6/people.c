/*
 * =====================================================================================
 *
 *       Filename:  people.c
 *
 *    Description:  Analyze persons records
 *
 *        Version:  1.0
 *        Created:  02/12/2019 10:08:11 AM
 *       Revision:  none
 *       Compiler:  gcc people.c -o  people.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants
#define PERSONS 5
#define ATTRI   3
#define AGE     0
#define WEIGHT  1
#define HEIGHT  2
//  Main Function
int main()
{
    double people[PERSONS][ATTRI];
    srand(time(0));
    for(int i = 0; i < PERSONS; i++)
    {
        for(int j = 0; j < ATTRI; j++)
        {
            if(j == AGE)
            {
                people[i][j] = rand() % 50; //set age 0-50
            }
            else if(j == WEIGHT)
            {
                people[i][j] = rand() % 250; //set age 0-50
            }
            else if(j == HEIGHT)
            {
                people[i][j] = rand() % 200;
            }
        }
    }
    printf("Person 2 has a height of [%lf]\n",people[3][HEIGHT]);
    return 0;
}
// Function Definitions


