/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  First hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/02/2019 08:49:19 AM
 *       Revision:  none
 *    Compiler(C):  gcc hello.cpp -o hello.out
 *  Compiler(C++):  g++
 *          Usage:  ./hello.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */ // for C
//#include <stdio.h>
//#include <stdlib.h>

//For C++
#include <iostream>
using namespace std;


// Constants and Globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num;
    // for output use cout
    cout << "Hello C++" <<endl;
    cout << "Enter a number:" << endl;
    // for input use cin
    cin >> num;
    cout << "You entered: " << num << " number" <<  endl;

    return 0;
}
// Function Definitions


