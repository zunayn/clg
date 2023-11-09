#include <iostream>
#include <stdio.h>

using namespace std;

void printArray(int array[], const int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void reverseArray(int array[], int arraySize) {
  int index = 0;
  int newArray[arraySize];
  for (int i = arraySize - 1; i >= 0; i--) {
    newArray[index] = array[i];
    index++;
    // cout << newArray[index];
  }
  // array = newArray;
  printArray(newArray, arraySize);
}

int main() {
  int num;
  int arraySize;
  // int reversed;
  cout << "Enter array length:" << endl;
  cin >> arraySize;

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    
    cin >> num;
    array[i] = num;
  }

  // printArray(array, arraySize);

  for (int i = 0; i < arraySize; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  cout << "Array reversed is: " << endl;

  reverseArray(array, arraySize);
  // printArray(array, arraySize);

  return 0;
}
