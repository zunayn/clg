// Author: Zunain Nazir (A05319890)
// Date: 10/10/2023
//CS1428 Lab
//Lab 6

//Description: this program will perform some operations on the digits of a number
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <stdio.h>
#include <iostream>
#include <string>

// ADD OTHER LIBRARIES AS REQUIRED HERE
using namespace std;

int main()
{
    int number,
        sum = 0,
        counter = 0,
        num,
        num_length,
        last,
        highest,
        times = 0,
        factorial = 1;
        
    string choice;
        

        do {
            
            cout << "Enter a number (100 - 100000)" << endl << endl;
                
            cin >> number;
            
            
            if (number < 100 || number > 100000){
                cout << "Invalid input. Please enter a number between 100 and 100000.";
                return -1;
            }
    
            num_length = to_string(number).length();
            
            num = number;
            
            highest = number % 10;
            
            while (counter < num_length){
                // Sum of digits of a number.
                last = num % 10;
                
                if (last > highest){
                    highest = last;
                }
                
                num /= 10;
          
                sum += last;
                counter++;
                
            }
                
            counter = 1;
         
            
            // Factorial of the highest digit
            
            while (counter <= highest){
                factorial = factorial*counter;
                counter++;
            }
            
            
            // Highest digit.
            cout << "Highest digit = " << highest << endl;
            cout << "Sum of digits of " << number << " = "<< sum << endl;
            cout << highest << "! = " << factorial << endl; 
            

           
            cout << "Do you want to continue (y/n)?";
            cin >> choice;
        }while(choice == "y" || choice == "Y");

        // TODO: Compute the sum of digits and
        // the factorial of the highest digit:
        
        
        cout << "Have a great day!!!" << endl;
        return 0;
}
