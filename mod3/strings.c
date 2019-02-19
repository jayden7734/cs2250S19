/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:48 AM
 *       Revision:  none
 *       Compiler:  gcc stings.c -o strings.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int SIZE = 50;
// Function Prototypes

// Main Function
int main()
{
   // A string is a list/collection of characters(array)
   char fName[SIZE];
   char lName[SIZE];
   unsigned int age; // For unsigned use the %du, %lu, %llu
   // Strings use %s as the placeholder
   printf("Please enter your first name (<%d characters, NO spaces):\n", SIZE);
   scanf("%s", fName); // when using arrays, do not include the '&' 
   printf("Please enter your last name (<%d characters, NO spaces):\n", SIZE);
   scanf("%s", lName); // when using arrays, do not include the '&' 
   printf("Enter your age:\n");
   scanf("%du", &age);
   
   //printf("Hi [%s]", fName);
   printf("[%s][ %s] is %d years old.\n", fName,lName,age);
   if(age >= 24)
   {
       printf("You old fart.\n");
   }
   else if (age < 24)
   {
       printf("Still a young buck.\n");
   }
 /*  else if (age < 75 && age >= 65)
   {
       printf("Enjoy your retirement.\n");
   }
   else if (age < 65 && age > 20)
   {
       printf("Nothing special\n");
   }
   else
   {
       printf("Still a young buck.\n");
   }*/
    return 0;
}
// Function Definitions


