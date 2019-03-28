/*
 * =====================================================================================
 *
 *       Filename:  open_fies.c
 *
 *    Description:  Practice opening files
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:43:25 AM
 *       Revision:  none
 *       Compiler:  gcc open_fies.c -o open_fies.out
 *          Usage:  ./open_fies.out
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
    FILE *fptr;
    int num;
    //1)open a file: fprt = fopen("file to open", "mode")
    fptr = fopen("progam.txt", "w");

    if(fptr == NULL)
    {
        printf("Error! Could not open file for writing\n");
        exit(1);
    }
    //2) read/write from/to the file
    printf("Enter a number: ");
    scanf("%d", &num);
    //write to file: fprintf()
    fprintf(fptr, "%d\n", num);
    //3) close the file: fclose(ptr)
    fclose(fptr);


    return 0;
}
// Function Definitions


