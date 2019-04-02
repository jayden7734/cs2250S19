/*
 * =====================================================================================
 *
 *       Filename:  years_calc.cpp
 *
 *    Description:  Light year calculator
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:05:38 AM
 *       Revision:  none
 *    Compiler(C):  gcc years_calc.cpp -o years_calc.out
         Compiler(C++):  g++
 *          Usage:  ./years_calc.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */ // for C
//#include <stdio.h>
//#include <stdlib.h>

//For C++
#include <iostream>
#include <iomanip>  // more input/output options
using namespace std;


// Constants and Globals
const double MILES_PER_LY = 5.879e+12;
const double KM_PER_LY = 9.461e+12;
const double PARSEC_PER_LY = 0.306601;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    double light_years;
    cout << "Light Year Calculator" << endl;
    cout << endl;
    //get input
    cout << "Enter light years: ";
    cin >> light_years;
    //Calculate miles, km and parsecs
    double miles = light_years * MILES_PER_LY;
    double km = light_years * KM_PER_LY;
    double parsecs = light_years * PARSEC_PER_LY;

    //Display results
    cout << endl << setprecision(8)
        << "SCIENTIFIC NOTATION" << endl 
        << "Miles:       " <<miles <<endl
        << "Kilometers:  " << km << endl
        << "Parsecs:     " << parsecs << endl;

    cout << fixed
        << "FIXED NOTATION" << endl 
        << "Miles:       " << setw(24) << miles <<endl
        << "Kilometers:  " << setw(24) << km << endl
        << "Parsecs:     " << setw(24) << parsecs << endl;


    return 0;
}
// Function Definitions


