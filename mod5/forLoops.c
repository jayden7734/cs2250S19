/*
 * =====================================================================================
 *
 *       Filename:  forLoops.c
 *
 *    Description:  Play with for loops
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:39:24 AM
 *       Revision:  none
 *       Compiler:  gcc forLoop.c -o forLoop.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAX_NUMBER 5
// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    for (int i = 0; i < MAX_NUMBER; ++i)
    {
        printf("Your i[%d] num++[%d]\n",i,num++);
        printf("num is [%d]\n",num);
        printf("Your i[%d] ++num[%d]\n",i,++num);
    }
    printf("Bye\n");
    return 0;
}
// Function Definitions


