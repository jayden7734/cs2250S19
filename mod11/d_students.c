/*
 * =====================================================================================
 *
 *       Filename:  d_students.c
 *
 *    Description:  Create and later read student records from file
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:44:02 AM
 *       Revision:  none
 *       Compiler:  gcc d_students.c -o d_students.out
 *          Usage:  ./d_students.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes
void WriteStudentData(FILE *fout, int num);
void ReadStudentData(FILE *fout, int num);

// Main Function
int main()
{
    int num;
    FILE *fptr;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    //openFILE *fptr;
    //1)open a file: fprt = fopen("file to open", "mode")
    if((fptr = fopen("students.txt", "w"))== NULL)
    {
        printf("Error! Could not open file\n");
        exit(1);
    }
    //Loop over students
    WriteStudentData(fptr, num);
    fclose(fptr);
    
    if((fptr = fopen("students.txt", "r"))== NULL)
    {
        printf("Error! Could not open file\n");
        exit(1);
    }
    //Loop over students
    
    ReadStudentData(fptr, num);
    fclose(fptr);


    return 0;
}
// Function Definitions
void WriteStudentData(FILE *fout, int num)
{
    char name[50];
    int marks;

    for(int i = 0; i < num; i++)
    {
        printf("For student %d\nEnter name: ", i+1);
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        //write to file
        //fprintf(fout, "\nName: %s \nMarks: %d \n", name, marks);
        fprintf(fout, "%s %d\n", name, marks);
    }
    return;
}

void ReadStudentData(FILE *fout, int num)
{
    char name[50];
    int marks;

    for(int i = 0; i < num; i++)
    {
        fscanf(fout, "%s %d", name, &marks);
        printf("%d) %s's grade is %d\n", i+1, name, marks);
        //printf("For student %d\n");
    }
    return;
}




