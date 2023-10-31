//TO-DO: Fill in the Authors Name Here
//TO-DO: Fill in the current date here
//CS1428 Lab
//Lab 9
//Description: this program will compute the frequency of each unique number in an array
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int SIZE; //number of elements to be stored in an array
    //Prompt the user for an array size
    cout << "Enter the size of an array:" << endl;
    cin >> SIZE;

    int nums[SIZE], frequency[10];
    int index = 0;


    for(int i = 0; i < SIZE; i++)
    {
        // TODO: Populate array with random numbers
    }
    cout << "\n Numbers in the array are: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    //TODO: Determine the frequency of each number

    //TODO: Determine the index of the number with the highest frequency

    cout << "Number with highest frequency : " << nums[index] << " occurred "
         << frequency[index] << " times" << endl;
    return 0;
}

