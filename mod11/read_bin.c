/*
 * =====================================================================================
 *
 *       Filename:  read_bin.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:07:18 AM
 *       Revision:  none
 *       Compiler:  gcc read_bin.c -o read_bin.out
 *          Usage:  ./read_bin.out
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
    
    for(int n = 1; n < 5; n++)
    {
        // To read binary data use: fread()
        // fread(address_data, size_data, numbers_data, pointer_to_file)
        fread(&nums, sizeof(ThreeNumbers), 1, fptr);
        printf("n1: %d\t n2: %d\t n3: %d\n", nums.n1, nums.n2, nums.n3);
    }


    fclose(fptr);

    return 0;
}
// Function Definitions


