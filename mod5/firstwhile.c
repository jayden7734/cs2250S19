/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:48:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MINCOUNT 2
#define MAXCOUNT 5
// Function Prototypes

// Main Function
int main()
{
    // 1: calculate the average of user inputs
    // 2: Validate that user input is from 0-100
    // 3: Ask user for number of grades
    // 4: If user enters a number below MINCOUNT set it to MINCOUNT
    //    and if user enters a value greater than MAXCOUNT set it to it.
    int count = 0;
    float grade, avg;
    float total = 0;
    int student_Count = 0;

    printf("Enter the number of graded assignments(between %d & %d:\n",
            MINCOUNT, MAXCOUNT);
    scanf("%d", &student_Count);
    if(student_Count < MINCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d.\n",student_Count,
                MINCOUNT,MINCOUNT);
        student_Count = MINCOUNT;
    }
    if(student_Count > MAXCOUNT)
    {
        printf("%d is higher than %d. Setting your entry to %d.\n",student_Count,
                MAXCOUNT,MAXCOUNT);
        student_Count = MAXCOUNT;
    }
    while(count < student_Count)
    {
        printf("\nEnter %d hw grade(0-100):", count +1);
        scanf("%f", &grade);
        if (grade <=0 || grade >= 100)
        {
            printf("Invalid input. Please try again.\n");
        continue; //Invalid input, but it keeps going 
        } 
        
            total += grade;//add up grades
        count++;            //update test condition: sentinel
        if(count == student_Count)
        {
            break;
        }
    }
    avg = total/student_Count;
    printf("Your avg is [%f%%]\n", avg);
    printf("\nBye amigo\n");
    return 0;
}
    
// Function Definitions


