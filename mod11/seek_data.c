/*
 * =====================================================================================
 *
 *       Filename:  seek_data.c
 *
 *    Description:  Access records at specific locations
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:16:55 AM
 *       Revision:  none
 *       Compiler:  gcc seek_data.c -o seek_data.out
 *          Usage:  ./seek_data.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
typedef struct ThreeNumbers
{
    int n1;
    int n2;
    int n3;
} ThreeNumbers;

// Function Prototypes

// Main Function
int main()
{
    FILE *fptr;
    ThreeNumbers nums;
    //1)open a file: fprt = fopen("file to open", "mode")
    if((fptr = fopen("progam.bin", "rb"))== NULL)
    {
        printf("Error! Could not open file\n");
        exit(1);
    }
    //TASK: Move the cursor to the end of the file. 
    //Use: fseek(FILE* stream, long int offset, int whence)
    //Different whences in fseek():
    //SEEK_SET: starts the offset from the beginning of file
    //SEEK_END: starts the offset from the end of the file
    //SEEK_CUR: starts the offset from the current location
    // to read data backwards at the record level NOT the EOF byte

    fseek(fptr, -sizeof(ThreeNumbers), SEEK_END); 
    //must add "-" to sizeof when using SEEK_END 
    for(int n = 1; n < 5; n++)
    {
        fread(&nums, sizeof(ThreeNumbers), 1, fptr); // one record
        printf("n1: %d\t n2: %d\t n3: %d\n", nums.n1, nums.n2, nums.n3);
        //seek the new position
        fseek(fptr, -2*sizeof(ThreeNumbers), SEEK_CUR);
    }

    fclose(fptr); //close file

    return 0;
}
// Function Definitions


