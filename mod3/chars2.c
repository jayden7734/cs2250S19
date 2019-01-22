/*
 * =====================================================================================
 *
 *       Filename:  chars2.c
 *
 *    Description:  More characters 
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:04:53 AM
 *       Revision:  none
 *       Compiler:  gcc chars2.c -o chars2.out
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
    char c = '0';
    
    printf("C is %c\n", c);
    printf("C is 0x%x",c); // %x for hex notation 
    printf("Enter the first letter of your first name: \n");
    scanf("%c", &c);
    printf("The first letter is %c\n", c);
    
    return 0;
}
// Function Definitions


