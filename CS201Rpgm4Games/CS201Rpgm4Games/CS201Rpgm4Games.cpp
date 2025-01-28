// CS201Rpgm4Games.cpp :
//Project games

#include <iostream>
using namespace std;

int roll2D6(bool TRF) 
{
	int sum, die1, die2;
	die1 = rand() % 6 + 1;
	die2 = rand() % 6 + 1;
	//display 2 diece
	if (TRF)
	{
		cout << "Die 1: " << die1 << "\nDie 2: " << die2 << endl;
	}
	sum = die1 + die2;
	cout << "Total: " << sum << endl;
	return sum;
}
void PlayCraps()
{
	int die1, die2, sum, wins = 0, loses = 0, point = 0, TRF = 0;
	char userContinue = 'y';
	bool showDie = true, validUserInput = false;

	cout << "Let's play craps!\n";

	while (userContinue != 'N' && userContinue != 'n')
	{
		
		while (validUserInput != true)
		{

			cout << "Do you want to see die roll? 1: Yes 2: No";
			cin >> TRF;
			if (TRF == 1)
			{
				showDie = true;
				validUserInput = true;
			}
			else if (TRF == 2)
			{
				showDie = false;
				validUserInput = true;
			}
			else
			{
				cout << "Please ender a valaid number!";
			}
		}

		//Roll 2 diece
		//Get sum
		sum = roll2D6(showDie);

		//Display 2 diece and sum

		// 7 or 11 means win
		if (sum == 7 || sum == 11)
		{
			cout << "You win!\n";
			wins++;
		}
		// else if 2, 3, 12 lose
		else if (sum == 2 || sum == 3 || sum == 12)
		{
			cout << "You lost...\n";
			loses++;
		}
		//	set point
		// rules: win when get point, lose when get 7
		//
		else
		{
			point = sum;
			sum = roll2D6(showDie);

			while (point != sum && sum != 7)
			{
				sum = roll2D6(showDie);
			}
			if (sum == 7)
			{
				cout << "You lost...\n";
				loses++;
			}
			else if (sum == point)
			{
				cout << "You won!\n";
				wins++;
			}
			else
			{
				cout << "Error!";
			}

		}
		cout << "Continue?Y/N\n";
		cin >> userContinue;
	}
	return;
}
int MainMenu()
{
	int choice = -1;
	cout << "Welcome to my games... hahaha!\n" << "Please choose a game:\n";
	cout << "1. craps\t" << "2. scraps\t" << endl;
	while (choice != 1 && choice != 2 && choice != 0)
	{
		cin >> choice;
		cout << "You are stuck until you win enough games.\n";

	}
	return choice;
}





int main()
{
	//variable slot:
	srand(time(0)); 
	int choice = -1;
	choice = MainMenu();
	switch (choice)
	{
	case 1:
		PlayCraps();
		break;
	case 2:
		cout << "Please wait";
		break;
	default:
		cout << "Goodbye~";
		break;
	}



}
