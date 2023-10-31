//TO-DO: Fill in the Authors Name Here
//TO-DO: Fill in the current date here
//CS1428 Lab
//Lab 9
//Description: this program will track movie preferences for the user
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 6; //number of movies
    const string GAMES[] = {"The Matrix",
                            "Fight Club",
                            "Spirited Away",
                            "Alien",
                            "Seven Samurai",
                            "Back to the Future"};

    double ratings[SIZE];
    double total = 0,
           average;
    int highest_index = 0;

    //Prompt the user for movie ratings
    cout << "Please enter a rating for the following movies:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << GAMES[i] << "  : ";
        // TODO: Take user input for movie rating HERE
    }

    // TODO: Determine the average rating

    // TODO: Determine the index of the movie with the highest rating


    cout << fixed << setprecision(1)
         << "Average rating : " << average << endl
         << "Highest rating : " << ratings[highest_index] << " rated "
         << GAMES[highest_index] << endl;


    return 0;
}

