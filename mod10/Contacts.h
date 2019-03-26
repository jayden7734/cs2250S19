/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  :
 *
 *        Version:  1.0
 *        Created:  03/24/2019 03:41:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS__INC__

typedef struct ContactNode 
{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode* nextNodePtr;
} ContactNode;

// Function Prototypes
void CreateContactNode(ContactNode* thisContact, char name[], char number[], ContactNode* newContact);
void InsertContactAfter(ContactNode* thisContact, ContactNode* newContact);
ContactNode* GetNextContact(ContactNode* thisContact);
void PrintContact(const ContactNode* st);

#endif /* ----- #ifndef CONTACTS__INC__ ----- */

