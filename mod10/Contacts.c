/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2019 03:21:37 PM
 *       Revision:  none
 *       Compiler:  gcc Contacts.c -o Contacts.out
 *          Usage:  ./Contacts.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Contacts.h"

// Constants

// Function Definitions
void CreateContactNode(ContactNode* thisContact, char name[], char number[], ContactNode* newContact)
{
    strcpy(thisContact->contactName, name);
    strcpy(thisContact->contactPhoneNum, number);
    InsertContactAfter(thisContact, newContact);

    return;
}
void  InsertContactAfter(ContactNode* thisContact, ContactNode* newContact)
{
     thisContact->nextNodePtr = newContact;
    
}
ContactNode* GetNextContact(ContactNode* thisContact)
{
    return thisContact->nextNodePtr;
}
void PrintContact(const ContactNode* st)
{
    printf("Name: %s\n", st->contactName);
    printf("Phone number: %s\n\n", st->contactPhoneNum);
    return;
}


