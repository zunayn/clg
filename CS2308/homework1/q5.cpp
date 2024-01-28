#include <iostream>
// C = 5/9 * (F - 32)
using namespace std;

double Celsius(double);

int main(){
    for (int i = 0; i <= 20; i++){
        cout << i << "F = " << Celsius(i) << "C" << endl;
    }
    return 0;
}

double Celsius(double fahrenheit){
    double result = (5.0/9.0) * (fahrenheit - 32);
    return result;
}