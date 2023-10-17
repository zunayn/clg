//Author: Zunain Nazir(A05319890)
//Date: 10/17/2023

//CS1428 Lab
//Lab 7
//Description: this program will play a number guessing game with the user

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Funtion prototypes:
void outputQuestion();
int getUserNumber();
int getSecretNumber();


int main()
{
	int user_number,
		secret_number,
		num_guesses = 0;

	srand(time(NULL));//Seeds the random number generator

	// Get the secret number
	secret_number = getSecretNumber(); // Function call

	// Guessing loop:
	do{
		outputQuestion(); // Function call
		user_number = getUserNumber(); // Function call

		// Error checking on user number
		while(user_number > 10 || user_number < 1)
		{
			cout << "ERROR: Enter a number 1-10:";
			user_number = getUserNumber(); // Function call
		}

		// Increment number of guesses
		num_guesses++;

		// Check user number against secret number
		if(secret_number > user_number)
			cout << "The secret number is greater than " << user_number << endl;
		else if (secret_number < user_number)
			cout << "The secret number is less than " << user_number << endl;
		else
			cout << "BINGO!! You guessed the secret number in " << num_guesses
			<< " tries!" << endl;

	}while(user_number != secret_number);

	return 0;
}



void outputQuestion(){
	cout << "Guess a Number 1-10: ";
}

int getUserNumber(){
	int num;
	cin >> num;
	return num;
}

int getSecretNumber(){
	// int random = rand();
	int random = rand() % 10 + 1;
	return random;
}