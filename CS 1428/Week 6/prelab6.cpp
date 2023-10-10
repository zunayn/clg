

//Author: Zunain Nazir (A05319890)

//Date: 10/10/2023

// Finish the following program which prints 'Boko' for every third integer

//from 0 to the user's given number inclusively using a While Loop.
#include <iostream>

using namespace std;

int main()
{

    int number;
    int counter = 1; //initialize the variable
    

    // user enters a number
    cout << "Enter a positive integer to print 'Boko' for";
    
    cin >> number;
 
    // check for invalid user input
    if (number < 1  || number > 40)
    {
        cout << "Invalid Input" << endl;
        return -1; // terminate program
    }

    else{
        
       while(counter < 40){
           // If counter is a multiple of 3.
           // But we are looping from 0, so if counter is a multiple of 2.
           // two spaces apart.
           
            if (counter % number == 0){
                cout << "Boko ";
                
            }
            else{
                cout << counter << " ";
            }
            
            counter++;
       }
    }
    // TODO - add your code here. Print every number up to the

    //user's number. Every third number print 'Boko' instead

    //Example:

    //     1 2 Boko 4 5 Boko

    //for numbers from 0 to the user's number.
    // hint: increment a counter variable inside the loop.

    // hint: number%3==0 every third number

    return 0;
}
