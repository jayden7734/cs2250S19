/*
 * =====================================================================================
 *
 *       Filename:  students.c
 *
 *    Description:  Create a dynamically allocated structure
 *
 *        Version:  1.0
 *        Created:  03/21/2019 08:44:40 AM
 *       Revision:  none
 *       Compiler:  gcc students.c -o students.out
 *          Usage:  ./students.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define MAX 50
typedef struct Student
{
    char fName[MAX];
    int idNum;
    struct Student* next;
}Student;

// Function Prototypes
void AddStudent(Student* thisStudent, char name[], int id, Student* newStudent);
void DisplayStudent(const Student* st);
void LinkStudents(Student* thisStudent, Student* newStudent);
// Main Function
int main()
{
    int id = 0;
    char name[MAX] = "";
    char choice = 'y';
    char dummy;
    Student *headRec = NULL;
    Student *currRec = NULL;
    Student *nextRec = NULL;

    while(choice == 'y')
    {
        // first round headRec == NULL 

        if(headRec != NULL)
        {
            //printf("Inside != NULL\n");
            LinkStudents(headRec, nextRec);
        }
        // Allocate the memory for the new record(headRec gets an address)
        currRec = (Student*)malloc(sizeof(Student));
        
        if(id == 0)
        {
            headRec = currRec;
        }
        printf("Student %d:\n", id + 1);
        id = id + 1;
        printf("Enter your name:\n");
        fgets(name, MAX, stdin);
        name[strlen(name) - 1] = '\0';  //Eliminate EOL character
        //Save it to a student structure
        AddStudent(currRec, name, id, NULL);
        printf("Do you want to enter another record? [y/n]\n");
        scanf(" %c%c", &choice, &dummy);
        fflush(stdin);
        

    }
    //Display all students
    currRec = headRec;
    while(currRec != NULL)
    {
        DisplayStudent(currRec); //display one record
        currRec = currRec->next;
        // Get the next record
    }
    return 0;
}
// Function Definitions
void AddStudent(Student* thisStudent, char name[], int id, Student* newStudent)
{
    //Student* tmp = NULL;                //dummy 
    
    strcpy(thisStudent->fName, name);
    thisStudent->idNum = id;
    thisStudent->next = newStudent;     // Set the address of the next member
    //newStudent->next = tmp;             // this is the end of the list 
    return;
}
void DisplayStudent(const Student* st)
{
    printf("Hi [%s] student with id [%d]\n", st->fName, st->idNum);
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LinkStudents
 *  Description:  Connect one node/structure to another
 * =====================================================================================
 */
void LinkStudents(Student* thisStudent, Student* newStudent)
{
    //printf("1 Inside Link list\n");
    //Student* tmp = NULL;                //dummy

    //tmp = thisStudent->next;            //currently should be NULL
    thisStudent->next = newStudent;     //Connect this to next record
    //newStudent->next = tmp;             //This is the end of the list
    //printf("2 Inside Link list\n");
    return;
}

