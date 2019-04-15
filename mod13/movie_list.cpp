/*
 * =====================================================================================
 *
 *       Filename:  movie_list.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2019 09:43:08 AM
 *       Revision:  none
 *    Compiler(C):  gcc movie_list.cpp -o movie_list.out
         Compiler(C++):  g++
 *          Usage:  ./movie_list.out
 *         Author:  Jayden Williams (), jaydenwilliams@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */ // for C
//For C++
#include <iostream>
#include <vector>   // vectors
#include <string>
#include <iomanip>  //pretty output
#include <fstream>  //for file stream
#include <sstream>  //read strings with spaces
#include "movie.h"
using namespace std;

// Constants and Globals
const string movie_file = "movies.txt";
// Function Prototypes
void display_menu();
vector<Movie> read_movies_from_file();
void view_movies(const vector<Movie>&movies);
void add_movie(vector<Movie>& movies);
void delete_movie(vector<Movie>& movies);
int get_movie_number(const vector<Movie>& movies);
Movie get_movie();

// Main Function
int main(int argc, char* argv[])
{
    cout << "The Movie List Program" << endl << endl;
    vector<Movie> movies = read_movies_from_file();
    char command = 'v';
    while(command != 'x')
    {
        display_menu();
        cout << "Enter Command: ";
        cin >> command;
        switch(command)
        {
            case 'v':
                view_movies(movies);
                break;
            case 'a':
                add_movie(movies);
                break;
            case 'd':
                delete_movie(movies);
                break;
            case 'x':
                cout << "Bye!" << endl << endl;
                break;
            default:
            cout << "Enter a valid command." << endl << endl;
        } //end of switch
    }
    return 0;
}
// Function Definitions
void display_menu()
{
    cout << "COMMANDS" << endl
        << "v - View movie list" << endl
        << "a - Add a movie" << endl
        << "d - Delete a  movie" << endl
        << "x - Exit" << endl << endl;
}
vector<Movie> read_movies_from_file()
{
    vector<Movie> movies;
    //Read file
    ifstream input_file(movie_file);
    if(input_file) // if file opened successfully
    {
        string line;
        while(getline(input_file, line))
        {
            stringstream ss(line);  // read the line and cast it as a string
            //Now ready to parse the line
            string title, temp;
            int year, stars;
            getline(ss, title, ','); // read title until you reach a comma
            
            getline(ss, temp, ',');
            year = stoi(temp);  // stoi converst string to int
            
            getline(ss, temp, ',');   // get stars
            stars = stoi(temp);
            //cout << title << " " << year << " " << stars << endl;
            movies.push_back(Movie(title, year, stars));
        }
        input_file.close();
    }

    return movies;
}
void add_movie(vector<Movie>& movies) 
{
    Movie movie = get_movie();

    // check if movie already exists
    bool already_exists = false;
    for (Movie& m : movies) 
    {
        if (m.iequals(movie)) 
        {
            already_exists = true;
            m.set_stars(movie.get_stars());
            break;
        }
    }

    if (already_exists) {
        //write_movies_to_file(movies);
        cout << movie.get_title() << " was updated.\n\n";
    }
    else {
        movies.push_back(movie);
        //write_movies_to_file(movies);
        cout << movie.get_title() << " was added.\n\n";
    }
}

Movie get_movie() 
{
    string title;
    cout << "Title: ";
	cin.ignore(1000, '\n');
    getline(cin, title);

    int year;
    cout << "Year: ";
    cin >> year;

    int stars;
    cout << "Stars (1-5): ";
    cin >> stars;

    Movie movie(title, year, stars);
    return movie;
}
void view_movies(const vector<Movie>&movies)
{
    int width = 8;
    cout << left
        << setw(width / 2) << " " 
        << setw(width *4) << "TITLE"
        << setw(width) << "YEAR"
        << setw(width) << "STARS" << endl;
    //loop over vector and get info using your getters
    int number = 1;
    for(Movie movie : movies)
    {
        cout << setw(width/2) << number
            << setw(width*4) << movie.get_title()
            << setw(width) << movie.get_year()
            << setw(width) << movie.get_stars() << endl;
        number++;
    }
    cout << endl;
}
void delete_movie(vector<Movie>& movies) 
{
    int number = get_movie_number(movies);

    int index = number - 1;
    Movie movie = movies[index]; //get a copy of the movie at that number
    movies.erase(movies.begin() + index); //deleting record from vector
    //write_movies_to_file(movies);
    cout << movie.get_title() << " was deleted.\n\n";
}

int get_movie_number(const vector<Movie>& movies) 
{
    unsigned int number;
    while (true) 
    {
        cout << "Number: ";
        cin >> number;
        if (number > 0 && number <= movies.size()) 
        {
            return number;
        }
        else 
        {
            cout << "Invalid movie number. Try again.\n";
        }
    }
}


