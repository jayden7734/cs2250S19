/*
 * =====================================================================================
 *
 *       Filename:  Pmain.c
 *
 *    Description:  
 *    
 *
 *        Version:  1.0
 *        Created:  03/25/2019 08:35:44 PM
 *       Revision:  none
 *       Compiler:  gcc Pmain.c PlaylistNode.c -o Pmain.out
 *          Usage:  ./Pmain.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "PlaylistNode.h"
// Constants

// Function Prototypes

// Main Function
int main()
{
    //1) Prompt user for playlist title. Use fgets, don't forget to eliminate
    //the end-of-line char
    //
    //2) Output a playlist menu of options
    char playlist[50];
    char userInput = '-';

    printf("Enter playlist's title:\n");
    fgets(playlist, 50, stdin);
    playlist[strlen(playlist) - 1] = '\0';

    while(userInput != 'q')
    {
        userInput = PrintMenu(playlist);
    }
    return 0;
}
// Function Definitions
char PrintMenu(char playlist[])
{
    char userInput = '-';
    char ID[50];
    char songName[50];
    char artistName[50];
    int length;

    printf("%s PLAYLIST MENU\n", playlist);
    printf("a - Add song\n");
    printf("r - Remove song\n");
    printf("c - Change position of song\n");
    printf("s - Output songs by specific artist\n");
    printf("t - Output total time of playlist (in seconds)\n");
    printf("o - Output full playlist\nq - Quit\n\n");
    while(userInput != 'a'&&userInput != 'r'&&userInput != 'c'&&userInput != 's'
            &&userInput != 't'&&userInput != 'o'&&userInput != 'q')
    {
        printf("Choose an option:\n");
        scanf(" %c", &userInput);
    }
    switch(userInput)
    {
        case 'a':

            printf("ADD SONG\n");
            printf("Enter song's unique ID:\n");
            scanf(" %s", ID);
            printf("Enter song's name:\n");
            scanf(" %s", songName);
            printf("Enter artist's name:\n");
            scanf(" %s", artistName);
            printf("Enter song's length:\n");
            scanf("%d", &length);

    }
    return userInput;
}



