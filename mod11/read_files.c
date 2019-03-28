/*
 * =====================================================================================
 *
 *       Filename:  read_files.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:48:44 AM
 *       Revision:  none
 *       Compiler:  gcc read_files.c -o read_files.out
 *          Usage:  ./read_files.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    FILE *fptr;
    int num;
    //1)open a file: fprt = fopen("file to open", "mode")
    if ((fptr = fopen("progam.txt", "r")) == NULL)  // for reading
    {
        printf("Error! Could not open file for reading\n");
        exit(1);
    }
    // Begin reading from file
    fscanf(fptr, "%d", &num);
    printf("Read %d from input file\n", num);

    fclose(fptr);


    return 0;
}
// Function Definitions


