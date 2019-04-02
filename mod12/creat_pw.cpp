/*
 * =====================================================================================
 *
 *       Filename:  creat_pw.cpp
 *
 *    Description:  Create a password and validate it:
 *                  At least 8 characters
 *                  At least 1 number
 *                  At least 1 special character
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:28:05 AM
 *       Revision:  none
 *    Compiler(C):  gcc creat_pw.cpp -o creat_pw.out
         Compiler(C++):  g++
 *          Usage:  ./creat_pw.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */ // for C
//#include <stdio.h>
//#include <stdlib.h>

//For C++
#include <iostream>
#include <string> 
using namespace std;


// Constants and Globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    string full_name;

    cout << "Create an account" << endl << endl;
    cout << "Enter full name: ";
    // to capture strings w/ or w/out spaces use: getline(cin, *variable*)
    getline(cin, full_name);
    cout << "Hi " << full_name << ", welcome to WSU branch" << endl;
    // Get the password
    string password;
    bool valid_pw = false;
    while(!valid_pw)
    {
        valid_pw = true;
        cout << "Enter your password: ";
        getline(cin, password);
        //At least 8 chars
        if(password.length() < 8)
        {
            cout << "Password must be at least 8 characters." << endl;
            valid_pw = false;
        }
        //At least one number
        auto index = password.find_first_of("0123456789");
        if(index == -1) // -1 means no match
        {
            cout << "Password must contain a number." << endl;
            valid_pw = false;
        }
        //at leastone symbol
        bool special_char = false;
        // for item in items... with iterate through all characters
        for(char c : password) // : means "in"
        {
            if(ispunct(c))
            {
                special_char = true;
                break; // exit the loop over the password string
            }
        }
        if(!special_char)
        {
            cout << "Password must contain a special character." << endl;
            valid_pw = false;
        }
        // display bad password
        if(!valid_pw)
        {
            cout << password << " is invalid" << endl;
            cout << "Please try again" << endl;
        }


    }//end of while loop

    cout << "Thank you" << endl;
    return 0;
}
// Function Definitions


