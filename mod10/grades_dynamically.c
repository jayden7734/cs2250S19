/*
 * =====================================================================================
 *
 *       Filename:  grades_dynamically.c
 *
 *    Description:  Enter number of grades in dynamic mode
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:56:42 AM
 *       Revision:  none
 *       Compiler:  gcc grades_dynamically.c -o grades_dynamically.out
 *          Usage:  ./grades_dynamically.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>  // malloc(), exit(), free()
// Constants

// Function Prototypes

// Main Function
int main()
{
    int numGrades;
    int* grades; //address of an integer

    printf("Enter the number of grades to be processed:\n");
    scanf("%d", &numGrades);
    //Here is where we request for memory
    //       <addressType> malloc(totalNumberOfBytes)
    grades = (int*) malloc(numGrades * sizeof(int));
    printf("Number of bytes: %ld\n", numGrades * sizeof(int));
    // we are creating a dynamically allocated array thru a pointer
    // Check if you get a valid address. Was the memory allocate?
    if(grades == NULL)
    {
        printf("Failed. Could not allocate memory.\n");
        exit(1);
    }
    // Ready to go from here
    for(int i = 0; i < numGrades; i++)
    {
        printf("Enter a grade: ");
        scanf("%d", &grades[i]);
    }
    //Display info
    for(int i = 0; i < numGrades; i++)
    {
        printf("%d\n", grades[i]);
    }
    //free memory when you are done
    free(grades);
    
    return 0;
}
// Function Definitions


