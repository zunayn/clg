//Author: Zunain Nazir(A05319890)
//Date: 11/14/2023
//CS1428 Lab
//Lab 11
//Description: this program will keep track of student data

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>

using namespace std;

//TODO: Create your struct

struct StudentInfo{
    string name;
    int ID;
    float grades[5];
};


float sumGrades(float grades[], int length){
    int total = 0;
    for (int i = 0; i < length; i++){
        total += grades[i];
    }
    
    return total;
}


float highestAverage(float arr[], int length){
    float highest = arr[0];
   
    for (int i = 0; i < length; i++){
        
        if (arr[i] > highest){
            highest = arr[i];
        }
    }
    
    return highest;
}

int main()
{
    const int NUM = 3, NUM_GRADES = 5;
	StudentInfo stud [NUM];	//array of Student structs
	float total = 0;
	float average[NUM], highest_avg = 0;

    int grade;
    
    // string stud_highest;
    
    string studentHighestName;
    

	for(int i = 0; i < NUM; i++)
    {
        cout << "Enter student name: ";
        cin >> stud[i].name;
        //TODO: Prompt/read remaining student information
        cout << "Enter student ID: ";
        cin >> stud[i].ID;
        
        cout << "Enter student grades:" << endl;
        
        for (int x = 0; x < NUM_GRADES; x++){
            cin >> grade;
            stud[i].grades[x] = grade;
        }
        
        total = sumGrades(stud[i].grades, NUM_GRADES);
        
        average[i] = total / NUM_GRADES;
        cout << "Average of student: " << average[i] << endl;
        
    }

    float highest = highestAverage(average, NUM);
    

    for (int z = 0; z < NUM; z++){
        if (sumGrades(stud[z].grades, NUM_GRADES) / NUM_GRADES == highest){
            studentHighestName = stud[z].name;
        }
    }
    
    
    cout << "The student " << studentHighestName << " has the highest average of " << highest;

	return 0;
}
