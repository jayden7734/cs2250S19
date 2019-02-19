/*
 * =====================================================================================
 *
 *       Filename:  charsChoice.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2019 10:14:19 AM
 *       Revision:  none
 *       Compiler:  gcc charsChoice.c -o charsChoice.out
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
   char letter;
   printf("Enter the grade you want in this class\n");
   printf("Your choices are: 'A'\t'B'\t'C'\n")
   printf("\t\t\t'D' or 'F'")
   scanf("%c", &letter);

   if(letter == 'A')
   {
       printf("You need to get >= 94 points\n");
   }
   printf("Done\n");

    return 0;
}
// Function Definitions


