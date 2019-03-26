/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/25/2019 08:34:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PLAYLISTNODE__INC__
#define  PLAYLISTNODE__INC__
#include <string.h>
#include <stdlib.h>
#define MAX 50
typedef struct PlaylistNode
{
    char uniqueID[MAX];
    char songName[MAX];
    char artistName[MAX];
    int songLength;
    struct PlaylistNode* nextNodePtr;  //address of next member, NULL for last member
}PlaylistNode;

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[], char songNameInit[],
        char artistNameInit, int songLengthInit, PlaylistNode* nextNode);

void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);

void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode);

PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode);

void PrintPlaylistNode(PlaylistNode* thisNode);

char PrintMenu(char playlist[]);
#endif /* ----- #ifndef PLAYLISTNODE__INC__ ----- */

