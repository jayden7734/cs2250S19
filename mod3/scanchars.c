/*
 * =====================================================================================
 *
 *       Filename:  scanchars.c
 *
 *    Description:  Enter multiple chars
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:42:14 AM
 *       Revision:  none
 *       Compiler:  gcc scanchars.c - scanchars.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
   char cIn;
   printf("Enter a character.\n");
   scanf(" %c", &cIn); // When capturing chars use extra space before the % to 
                    // this will help you capture the extra ENTER key
   printf("You entered [%c]\n", cIn);

   printf("Enter a character.\n");
   scanf(" %c", &cIn);
   printf("You entered [%c]\n", cIn);

   printf("Enter a character.\n");
   scanf(" %c", &cIn);
   printf("You entered [%c]\n", cIn);
    return 0;
}
// Function Definitions


