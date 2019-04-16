#include<iostream>
#include "List.h"
using namespace std;

List::List()
{
    head=NULL;
    tail=NULL;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  creatnode
 *  Description:  Create a new node by referencing corresponding pointers in the 
 *  linked list
 * =====================================================================================
 */
void List::createnode(int value)
{
    //Create a new node from the HEAP
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    //Connect the nodes
    if(head == NULL) //first node
    {
        head = temp;
        tail = temp;
    }
    else //second or more nodes
    {
        //inserts at the end of the list
        tail->next = temp;
        tail = temp;
    }


    return;
}


void List::display()
{
    node *temp = new node;
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next; //point to next member
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert_start
 *  Description:  Insert node at the beginning of the list. Remap the head ptr
 * =====================================================================================
 */
void List::insert_start(int value)
{
    //Create the new node
    node *temp = new node;
    temp->data = value;
    temp->next = head;
    //Set the head ptr
    head = temp;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert_position
 *  Description:  Insert at a given index position, reconnect linked list
 * =====================================================================================
 */
void List::insert_position(int pos, int value)
{
    node *temp = new node;
    node *previous = new node;
    node *current = new node;
    current = head;  //point to first member
    for(int i = 1; i < pos; i++) //goes to postion in front of the desired postion 
                                //and sets that to previous and the next one to current
    {
        previous = current;
        current = current->next;
    }
    // Connect previous to current to the rest
    temp->data = value;
    previous->next = temp;
    temp->next = current;
    return;
}


void List::delete_first()
{
    node *temp = new node;
    temp = head;       //save old head
    head = temp->next;
    delete temp;
    return;
}


void List::delete_last()
{
    node *current = new node;
    node *previous = new node;
    current = head;
    while(current->next != NULL)
    {
        previous = current;
        current = current->next;
    }
    //set last member
    tail = previous;
    previous->next = NULL;
    delete current;
    return;
}


void List::delete_position(int pos)
{
    node *previous = new node;
    node *current = new node;
    node *temp = new node;
    current = head;
    int list_size = 0;
    //Verify postion is within boundaries of the node
    while(current->next != NULL)
    {
        list_size++;
        current = current->next;
    }
    if(pos > list_size)
    {
        cout << "Position out of bounds" << endl;
        return;
    }
    //if it is within boundaries, it continues
    //loop over nodes
    for(int i = 1; i < pos; i++)
    {
        previous = current;
        current = current->next;
    } //after this loop, current is at the position that needs to be deleted
    previous->next = current->next;
    delete current;

    return;
}
