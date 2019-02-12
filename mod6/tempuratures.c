/*
 * =====================================================================================
 *
 *       Filename:  tempuratures.c
 *
 *    Description:  Tempurature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:09 AM
 *       Revision:  none
 *       Compiler:  gcc tempuratures.c -o tempuratures.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

#define NUM 40
#define MIN 20   //min temp
#define MAX 45   //max temp
// Constants

// Function Prototypes

// Main Function
int main()
{
    double maxOgden[NUM];
    double minOgden[NUM];
    double avg = 0, minTemp = 0, maxTemp = 0;
    int minDay, maxDay;
    srand(time(0));

    printf("Simulating the max and min Ogden temps for the next %d days:\n",NUM);
    //Capture max and min temps from user
    for(int i = 0; i < NUM; i++)
    {
//        printf("%d day max and min\n", i+1);
//        scanf("%lf %lf", &maxOgden[i], &minOgden[i]);
        minOgden[i] = ((rand() % MIN) + (rand() % MAX))/2;
        maxOgden[i] = minOgden[i] + (rand() % (MAX - MIN));
    }
    //Display information
    for(int i = 0; i < NUM; i++)
    {
        printf("%2d max[%6.2lf] and min[%6.2lf] temps in Ogden\n", i+1, maxOgden[i], minOgden[i]);
    }
        //Calculate the average and min and max of the date range
    minTemp = minOgden[0];   //initialize min and max Temp
    maxTemp = maxOgden[0];
    for(int i = 0; i < NUM; i++)
    {
        avg += minOgden[i];   //adding elements +=
        avg += maxOgden[i];
        if(minOgden[i] < minTemp)   //find min
        {
            minTemp = minOgden[i];
            minDay = i+1;
        }
        if(maxOgden[i] > maxTemp)   //find max
        {
            maxTemp = maxOgden[i];
            maxDay = i+1;
        }
    }
    
    avg = avg/(NUM * 2);
    printf("Your average temp is [%6.2lf]\n", avg);
    printf("Your min is [%6.2lf] on day %d and max is [%6.2lf] on day %d\n", minTemp,minDay, maxTemp, maxDay);
    
    return 0;
}
// Function Definitions


