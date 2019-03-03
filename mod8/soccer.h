/*
 * =====================================================================================
 *
 *       Filename:  soccer.h
 *
 *    Description:  Soccer Roster Library
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:41:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SOCCER__INC__
#define  SOCCER__INC__
// Constants
#define NUM_PLAYERS 2

// Function Prototypes
void GetUserNumberAndRating(int nums[], int ratings[]);
void DisplayRoster(int nums[], int ratings[]);
void UpdateRating(int nums[], int ratings[]);
void DisplayPlayersAboveRating(int nums[], int ratings[]);
void ReplacePlayer(int nums[], int ratings[]);
char DisplayMenu();

#endif /* ----- #ifndef SOCCER__INC__ ----- */

