#include <iostream>

using namespace std;

void timesTen(int);

int main(){
    timesTen(5);
    timesTen(1);
    timesTen(0);
    timesTen(160);
    return 0;

}

void timesTen(int number){
    int result = number * 10;
    cout << number << " * 10 is " << result << endl;
}