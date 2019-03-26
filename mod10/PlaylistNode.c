/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.c
 *
 *    Description:  Implement the playlist library
 *
 *        Version:  1.0
 *        Created:  03/25/2019 08:34:13 PM
 *       Revision:  none
 *       Compiler:  gcc PlaylistNode.c -o PlaylistNode.out
 *          Usage:  ./PlaylistNode.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "PlaylistNode.h"
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
            scanf("%d", length);


    return userInput;
}

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[], char songNameInit[],
        char artistNameInit, int songLengthInit, PlaylistNode* nextNode);
{
    //1) Set all your strings in thisNode to the input parameters (strcpy)
    //2) Set all your integers in thisNode to the input parameters
    //3) Set the nextNodePtr to the nextNode
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertPlaylistNodeAfter
 *  Description:  Linking you PlaylistNodes
 * =====================================================================================
 */
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    PlaylistNode* tempNext = NULL;
    //1) Set temp to thisNode->nextNodePtr 
    //2) update thisNode->nextNodePtr to newNode
    //3) Set newNode->nextNodePtr to tempNext
    return;
}

void SetNextPlaylistNode()
{
    //1) Set the thisNode->nextNodePtr to newNode
    return;
}

PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode)
{
    // return the nextNodePtr
    return thisNode->nextNodePtr;
}

void PrintPlaylistNode(PlaylistNode* thisNode)
{
    //1) Print each member of the PlaylistNode
    return;
}

