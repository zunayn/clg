//Author: Zunain Nazir (A05319890)
//Dated: 11/14/2023

//You may not have covered this material in your lecture sections.
//Complete as best as you are able.  Refer to the prelab reading for assistance.

//Add code where requested to complete the program.

#include <iostream>
#include <fstream>


using namespace std;

struct Dog
{
    string name;
    string breed;
    char gender;
    int age;
};

void printDogInfo(Dog dog){
    // "Name: Sparky, Gender: M, Age: 5, Breed: Collie"
    cout << "Name: " << dog.name << ", ";
    cout << "Gender: " << dog.gender << ", ";
    cout << "Age: " << dog.age << ", ";
    cout << "Breed: " << dog.breed << " " << endl;
};

int main()
{
    
    Dog dog1;
    dog1.name = "Sparky";
    dog1.gender = 'M';
    dog1.age = 5;
    dog1.breed = "Collie";
    
    
    Dog dog2;
    
    cout << "Name of dog:";
    cin >> dog2.name;
    // cin >> dog2.breed;
    
    cout << endl << "Age of dog: ";
    cin >> dog2.age;
    
    cout << endl << "Gender of dog: ";
    cin >> dog2.gender;
    
    cout << endl << "Breed of dog: ";
    cin >> dog2.breed;
    

    printDogInfo(dog1);
    printDogInfo(dog2);
 

    return 0;
}