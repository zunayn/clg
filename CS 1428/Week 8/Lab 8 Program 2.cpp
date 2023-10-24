//Author: Zunain Nazir (A05319890)
//Dated: 10/24/2023
//CS1428 Lab
//Lab 8
//Description: this program will calculate salaries for employees

#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes:
bool isValidHours(int);
float calcPay(int, float);
float calcAveragePay(float, int);

int main()
{
    int num_employees,
        hours;
    float total_pay = 0,
          pay_rate,
          avg_pay,
          pay;
    
    cout << "Enter the number of employees: ";
    cin >> num_employees;

    while(num_employees < 1)
    {
        cout << "ERROR: Number of Employees must be at least 1." << endl
             << "Enter the number of employees: ";
        cin >> num_employees;
    }

    cout << fixed << setprecision(2);

    for(int i = 1; i <= num_employees; i++)
    {
        cout << "\n\nEnter number of hours worked by Employee " << i << ": ";
        cin >> hours;

        while(!isValidHours(hours)) // Function Call
        {
            cout << "ERROR: Hours must be between 1 and 40." << endl
                 << "Enter number of hours worked by Employee " << i << ": ";
            cin >> hours;
        }

        cout << "Enter the pay rate for Employee " << i << ": ";
        cin >> pay_rate;

        pay = calcPay(hours, pay_rate); // Function Call

        total_pay += pay;

        cout << "\nWeekly Salary of Employee " << i << ": $" << pay << endl;
    }

    avg_pay = calcAveragePay(total_pay, num_employees); // Function Call

    cout << "\n\nThe Average Weekly Salary for the Company is $" << avg_pay;

    return 0;
}

// Function definitions.

bool isValidHours(int hours){
   //ERROR: Hours must be between 1 and 40.
   return (hours >=1) && (hours <= 40);
 }

// calcPay(hours, pay_rate)
float calcPay(int hours, float pay_rate){
    float total = hours * pay_rate;
    return total;
}

float calcAveragePay(float total_pay, int num_employees){
    float avg_pay = total_pay / num_employees;
    return avg_pay;
}

