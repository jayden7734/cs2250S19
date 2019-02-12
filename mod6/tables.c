/*
 * =====================================================================================
 *
 *       Filename:  tables.c
 *
 *    Description:  Dispaly multiplication tables
 *
 *        Version:  1.0
 *        Created:  02/12/2019 09:49:12 AM
 *       Revision:  none
 *       Compiler:  gcc tables.c -o tables.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define TABLES 10
// Function Prototypes

// Main Function
int main()
{
    int tables[TABLES][TABLES];
    for(int i = 1; i <= TABLES; i++)
    {
        for(int j = 1; j <= TABLES; j++)
        {
            printf("%3d\t",i * j);
            tables[i-1][j-1] = i * j;      //index notation
        }
        printf("\n");
    }
    printf(" 1 * 6 = %d\n", tables[0][5]);   // test the array
    return 0;
}
// Function Definitions


