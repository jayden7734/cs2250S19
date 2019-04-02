/*
 * =====================================================================================
 *
 *       Filename:  first_class.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2019 10:04:48 AM
 *       Revision:  none
 *    Compiler(C):  gcc first_class.cpp -o first_class.out
         Compiler(C++):  g++
 *          Usage:  ./first_class.out
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
struct Movie
{
    string title = "";     //data member
    int year = 0;          //date member
};
// Function Prototypes
bool Equals(const Movie& my_movie, const Movie& to_compare);  // the address operator is at the end of the name
// Main Function
int main(int argc, char* argv[])
{
    Movie movie;   //create movie object
    movie.title = "Batman"; 
    movie.year = 2008;

    cout << "MOVIE DATA" << endl
        << "Title:   " << movie.title << endl
        << "Year:    " << movie.year <<endl;

    Movie movie2;
    movie2.title = "Batman"; 
    movie2.year = 2009;

    cout << "MOVIE DATA" << endl
        << "Title:   " << movie2.title << endl
        << "Year:    " << movie2.year <<endl;
    if(Equals(movie, movie2))
    {
        cout << "Movies are the same" << endl;
    }
    else
    {
        cout << "Movies are different" << endl;
    }
    return 0;
}
// Function Definitions

bool Equals(const Movie& my_movie, const Movie& to_compare)
{
    return (my_movie.title == to_compare.title && 
            my_movie.year == to_compare.year);
}
