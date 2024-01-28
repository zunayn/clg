#include <iostream>

using namespace std;

void getNumber(int &number){
    int userInput;
    cout << "Enter a number in the range of 1-100: ";
    cin >> userInput;
    if ((userInput >= 1) && (userInput <= 100)){
        number = userInput;
    }

}

int main(){
    int number = 0;
    getNumber(number);
    cout << "Number is "<< number;
    return 0;
}