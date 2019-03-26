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
void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[], 
        char songNameInit[], char artistNameInit, int songLengthInit, 
        PlaylistNode* nextNode)
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
    //PlaylistNode* tempNext = NULL;
    //1) Set temp to thisNode->nextNodePtr 
    //2) update thisNode->nextNodePtr to newNode
    //3) Set newNode->nextNodePtr to tempNext
    return;
}

void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode)
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

