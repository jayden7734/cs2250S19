/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2019 03:41:57 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.out
 *          Usage:  ./main.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contacts.h"
// Constants
#define MAX 50
// Function Prototypes

// Main Function
int main()
{
    char name[MAX];
    char number[MAX];

    ContactNode *headCont = NULL;
    ContactNode *currentCont = NULL;
    ContactNode *nextCont = NULL;

    for(int i = 0; i < 3; i++)
    {
        nextCont = (ContactNode*) malloc(sizeof(ContactNode));

        if(currentCont == NULL)
        {
            headCont = nextCont;
        }
        else
        {
            InsertContactAfter(currentCont, nextCont);
        }

        printf("Person %d\n", i+1);
        printf("Enter name:\n");
        fgets(name, MAX, stdin);
        name[strlen(name) - 1] = '\0';
        printf("Enter phone number:\n");
        fgets(number, MAX, stdin);
        if(i != 2)
        {
            number[strlen(number) - 1] = '\0';
        }
        printf("You entered: %s, %s\n\n", name, number);
        
        CreateContactNode(nextCont, name, number, NULL);
        //InsertContactAfter(nextCont, NULL);

        currentCont = nextCont;

    }
    currentCont = headCont;
    printf("CONTACT LIST\n");
    while(currentCont != NULL)
    {
        PrintContact(currentCont);
        currentCont = currentCont->nextNodePtr;
    }




    return 0;
}
// Function Definitions


