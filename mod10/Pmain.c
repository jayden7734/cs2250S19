/*
 * =====================================================================================
 *
 *       Filename:  Pmain.c
 *
 *    Description:  
 *    
 *
 *        Version:  1.0
 *        Created:  03/25/2019 08:35:44 PM
 *       Revision:  none
 *       Compiler:  gcc Pmain.c -o Pmain.out
 *          Usage:  ./Pmain.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "PlaylistNode.h"
// Constants

// Function Prototypes

// Main Function
int main()
{
    char playlist[50];
    char userInput = '-';

    printf("Enter playlist's title:\n");
    scanf("%s", playlist);

    while(userInput != 'q')
    {
        userInput = PrintMenu(playlist);
    }
    return 0;
}
// Function Definitions


