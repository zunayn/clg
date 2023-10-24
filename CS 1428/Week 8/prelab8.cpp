//Author: Zunain Nazir (A05319890)
//Dated: 10/24/2023

#include <stdio.h>

#include <iostream>
using namespace std;

// TODO - write the prototypes here
double getRadius();
double calcArea(double r);
void printResults(double a);


int main()
{
    double radius,
           area;

    radius = getRadius();

    area = calcArea(radius);

    printResults(area);

    return 0;
}


double getRadius(){
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    return radius;
}


double calcArea(double radius){
    double pi = 3.14159;
    double area = pi * (radius*radius);
    return area;
}


void printResults(double area){
    cout << "The area of your circle is " << area << " units squared."
         << endl;
}