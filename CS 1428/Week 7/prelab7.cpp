//Author: Zunain Nazir (A05319890)
//Date: 10/17/2023

#include <iostream>
using namespace std;

void welcome(){
    // Outputs welcome message on screen.
    cout << "Welcome to my fabulous Jedi power level calculator!" << endl
    << "This program will take your age, weight, and" << endl
    << "midichlorean count and return your Jedi power level!"
    << endl << endl;
}


double get_jedi_level(){
    int age;
    int weight;
    int mcc;
    
    cout << "please enter your age : ";
    cin >> age;
    cout << "please enter your weight : ";
    cin >> weight;
    cout << "please enter your midicholrean count : ";
    cin >> mcc;
    return static_cast <double>(mcc * age) / (weight * weight);
}

int main()
{

    double jedi_level;

    welcome();
    jedi_level = get_jedi_level();

    // this should remain inside your main function
    cout << "Your Jedi Level is : " << jedi_level;

    return 0;

    }