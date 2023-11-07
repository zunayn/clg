//Author: Zunain Nazir (A05319890)
//Date: 11/07/2023
//CS1428 Lab
//Lab 10

//Description: this program will find letter grades from 5 number grades
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;

double getAverage(double g[], const int SIZE)
{
    double total = 0;
    for(int i = 0; i < SIZE; i++){
        total += g[i];
    }
    return total / SIZE;
}

void getGrades(double g[], const int SIZE)
{
    cout << "Please enter 5 grades:" << endl;
    for(int i = 0; i < SIZE; i++){
        cin >> g[i];
    }
}


void countLetterGrades(double grades[], const int SIZE, int &numberOfAs, int &numberOfBs, int &numberOfCs, int &numberOfDs, int &numberOfFs){
    // Finds the number of A’s, B’s, C’s, D’s and F’s the student earned. 
    for (int i = 0; i < SIZE; i++){
        if (grades[i] >= 90 && grades[i] <= 100){
            numberOfAs += 1;
        }else if (grades[i] >= 80 && grades[i] <= 89){
            numberOfBs += 1;
        }else if (grades[i] >= 70 && grades[i] <= 79){
            numberOfCs += 1;
        }else if (grades[i] >= 60 && grades[i] <= 69){
            numberOfDs += 1;
        }else{
            numberOfFs += 1;
        }
    } 
}

void printData(double average, int numberOfAs, int numberOfBs, int numberOfCs, int numberOfDs, int numberOfFs){
    cout << "Average: " << average << endl;
    string grades[5] = {"A", "B", "C", "D", "F"};
    
    cout << "Number of A's: " << numberOfAs << " ";
    cout << "Number of B's: " << numberOfBs << " ";
    cout << "Number of C's: " << numberOfCs << " ";
    cout << "Number of D's: " << numberOfDs << " ";
    cout << "Number of F's: " << numberOfFs << " ";
}

// TODO: Complete function definitions
int main(){
    const int SIZE = 5;
    double grades[SIZE],
    average;
    int numberOfAs = 0,
    numberOfBs = 0,
    numberOfCs = 0,
    numberOfDs = 0,
    numberOfFs = 0;
    
    getGrades(grades, SIZE);
    
    average = getAverage(grades, SIZE);
    
    countLetterGrades(grades, SIZE, numberOfAs, numberOfBs, numberOfCs, numberOfDs, numberOfFs);
    printData(average, numberOfAs, numberOfBs, numberOfCs, numberOfDs, numberOfFs);
    
    
    return 0;
}
