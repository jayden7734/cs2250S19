/*
 * =====================================================================================
 *
 *       Filename:  write_bin.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:55:46 AM
 *       Revision:  none
 *       Compiler:  gcc write_bin.c -o write_bin.out
 *          Usage:  ./write_bin.out
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
// Main Function
int main()
{
    FILE *fptr;
    ThreeNumbers nums;
    //1)open a file: fprt = fopen("file to open", "mode")
    if((fptr = fopen("progam.bin", "wb"))== NULL)
    {
        printf("Error! Could not open file\n");
        exit(1);
    }
    //write to file
    for(int n = 1; n < 5; n++)
    {
        nums.n1 = n;
        nums.n2 = 5*n;
        nums.n3 = 5*n + 1;
        // To write binary data use: fwrite()
        // fwrite(address_data, size_data, numbers_data, pointer_to_file)
        fwrite(&nums, sizeof(ThreeNumbers), 1, fptr);
    }


    fclose(fptr);
    return 0;
}
// Function Definitions


