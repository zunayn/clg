//Author: Zunain Nazir (A05319890)
//Date: 10/31/2023
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
    // int indexes[10];
    
    srand((unsigned) time(NULL));

	// Get a random number
	int random;
    
    for(int i = 0; i < SIZE; i++)
    {
        // Choose a random number.
        random = 1 + (rand() % 10);
        nums[i] = random;
    }
    
    cout << "\n Numbers in the array are: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    
    for (int x = 0; x < SIZE; x++){
        for (int y = 0; y < SIZE; y++){
            if (nums[y] == nums[x]){
                frequency[x] += 1;    
            }
        }
    }
    
    for (int i = 0; i <= 9; i++){
        
        if (frequency[i] < frequency[i+1]){
            index = frequency[i];
        }
    }    
    
    // for (int i = 0; i < 10; i++){
    //     cout << frequency[i] << endl;
    // }
    
    // cout << "Index is: " << index << endl;
 
    cout << "Number with highest frequency : " << nums[index] << " occurred "
         << frequency[index] << " times" << endl;
    return 0;
}

