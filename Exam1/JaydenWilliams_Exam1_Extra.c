/*
 * =====================================================================================
 *
 *       Filename:  JaydenWilliams_Exam1_Extra.c
 *
 *    Description:  Fix code
 *
 *        Version:  1.0
 *        Created:  02/21/2019 09:58:15 AM
 *       Revision:  none
 *       Compiler:  gcc JaydenWilliams_Exam1_Extra.c -o JaydenWilliams_Exam1_Extra.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void jamon(int num);
// Main Function

// Function Definitions
int main()
{
    int p;
    printf("Please enter an integer\n");
    scanf("%d", &p);
    jamon(p);

    return 0;
}
void jamon(int num)
{
    int count;
    for(count = 1; count <= num; count++)
    {
        printf("O jamon mio!\n");
    }
    return;
}

