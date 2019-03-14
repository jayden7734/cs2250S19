/**
 * @author      : Hugo Valle (hugovalle1@weber.edu)
 * @file        : hello
 * @created     : Tuesday Nov 13, 2018 15:12:48 UTC
 */
#include <stdio.h>
#include "seats.h"

/*** Functions for Seat ***/
char SeatsMenu()
{
    char input;
        printf("Enter command: \n");
        printf("\t To Print, press: p \n");
        printf("\t For a reservation, press: r\n");
        printf("\t To cancel reservation, press: c\n");
        printf("\t To quit, press: q\n");
        scanf(" %c", &input);
    return input;
}
void SeatMakeEmpty(Seat* seat) 
{
//    strcpy((*seat).firstName, "empty");
    strcpy(seat->firstName, "empty");
    strcpy(seat->lastName,  "empty");
    seat->amountPaid = 0;
}

bool SeatIsEmpty(Seat seat) 
{
    return (strcmp(seat.firstName, "empty") == 0);
}

void SeatPrint(Seat seat) 
{
    printf("%s ", seat.firstName);
    printf("%s, ", seat.lastName);
    printf("Paid: %d\n", seat.amountPaid);
}
/*** End functions for Seat ***/

/*** Functions for array of Seat ***/
void SeatsMakeEmpty(Seat seats[], int numSeats) 
{
    int i;

    for (i = 0; i < numSeats; ++i) 
    {
        // Take the address of a Seat structure
        SeatMakeEmpty(&seats[i]);
    }
}

void SeatsPrint(Seat seats[], int numSeats) 
{
    for (int i = 0; i < numSeats; ++i) {
        printf("%d: ", i);
        SeatPrint(seats[i]);
    }
}
/*** End functions for array of Seat ***/

