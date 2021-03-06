/*
 * =====================================================================================
 *
 *       Filename:  avg_grades_mc.c.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:48:28 AM
 *       Revision:  none
 *       Compiler:  gcc avg_grades_mc.c.c -o avg_grades_mc.out
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>  // true and false variables
#include <stdlib.h>   // rand();srand()
#include <time.h>     // time()
// Constants
#define MINCOUNT 2
#define MAXCOUNT 5
#define MINGRADE 0
#define MAXGRADE 100
#define MAXSTUDENTS 30
// Function Prototypes

// Main Function
int main()
{
    // 1: calculate the average of user inputs
    // 2: Validate that user input is from 0-100
    // 3: Generate random data for how many value the need to enter
    // 4: If user enters a number below MINCOUNT set it to MINCOUNT
    //    and if user enters a value greater than MAXCOUNT set it to it.
    // 5: Support multiple student entries. Calculate class average
    // 6: Display student letter grade
    int grade_count = 0;
    int student_count = 1;
    float grade, avg;
    float total = 0, class_avg = 0;
    int Hw_count = 0;

    srand(time(0));      //set random seed
    
    for(student_count = 1; student_count <= MAXSTUDENTS; student_count++)
    {
        printf("Processing %d student grades\n", student_count);
        printf("Enter the number of graded assignments(between %d & %d:\n",
                MINCOUNT, MAXCOUNT);
        //scanf("%d", &Hw_count);
        Hw_count = rand () % 10;
        printf("Homework count: [%d]\n", Hw_count);
        if(Hw_count < MINCOUNT)
        {
            printf("%d is lower than %d. Setting your entry to %d.\n",Hw_count,
                    MINCOUNT,MINCOUNT);
            Hw_count = MINCOUNT;
        }
        if(Hw_count > MAXCOUNT)
        {
            printf("%d is higher than %d. Setting your entry to %d.\n",Hw_count,
                    MAXCOUNT,MAXCOUNT);
            Hw_count = MAXCOUNT;
        }
        //loop over student grades
        while(grade_count < Hw_count)
        {
            printf("\nEnter %d hw grades(%d-%d):\n", grade_count +1,MINGRADE,MAXGRADE);
            //scanf("%f", &grade);
            grade = rand()% 150; // get random # 0-150
            grade = grade - (rand() % 100);
            printf("Grade: [%f]\n",grade);
            // "Randomly" make it negative
            if (grade <=MINGRADE || grade >= MAXGRADE)
            {
                printf("Invalid input. Please try again.\n");
                continue; //Invalid input, but it keeps going 
            } 

            total += grade;//add up grades
            grade_count++;            //update test condition: sentinel
            if(grade_count == Hw_count)
            {
                break;          // reach 
            }
        }  // end of one student loop
        avg = total/Hw_count; // graded based on total # of assignments
        class_avg += avg;     // adds up the averages each iteration into class_avg
        printf("Your avg is [%6.2f%%]\n", avg);
        grade_count = 0;
        total = 0;
        
    } // end of students loop
    printf("Your class average is [%6.2f%%]\n", class_avg/MAXSTUDENTS);
    printf("\nBye amigo\n");
    return 0;
}
    
// Function Definitions


