/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    p
 *    Description:  First look into LinkedList
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:03:18 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.out
 *          Usage:  ./tele_type.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
#define MAXNAME 30
#define MAXPHONE 15

struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType* nextaddr;  //"should" be the last member of the structer
};
typedef struct TeleType Tele;

// Function Prototypes

// Main Function
int main()
{
    Tele t1 = {"Acme, Junio", "(801) 891-2344"};
    Tele t2 = {"Hall, John", "(801) 234-54-78"};
    Tele t3 = {"Smith, Fred", "(801) 864-34-16"};

    Tele* first; //address of the structure

    first = &t1;  // get the address of a Tele structure
    t1.nextaddr = &t2; //set the address of the next structure right after the first
    t2.nextaddr = &t3;
    t3.nextaddr = NULL; // set the address of Null, last member
    printf("%s\n%s\n%s\n", first->name, t1.nextaddr->name,
            t2.nextaddr->name); // gets the value 
                                                    //from the "first" address 

    return 0;
}
// Function Definitions


