// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <time.h>

using namespace std;


int main()
{
	int iNumber = 0;
	int iGuess = 0;
	int iChance = 8;
	srand(time(NULL));
	iNumber = rand() % 1000 + 1;
	cout << "Guess a number that the computer has selected between 1 to 100" <<endl;

	while (iGuess != iNumber)
	{
		cout << "Number of guesses you got left:";
		cout << iChance << endl;
		cout << "Enter your guess :" << endl;
		cin >> iGuess;
		if (iGuess == iNumber)
		{
			cout << "YES" << endl << endl;
		}
		if (iGuess > iNumber)
		{
			
			if (iChance != 1)
			{
				cout << "Go Lower" << endl << endl;
				iChance--;
			}
			else
			{
				cout << "You Lose! The number was " << endl;
				cout << iNumber << endl;
				break;
			}
		}
		if (iGuess < iNumber)
		{
			
			if (iChance != 1)
			{
				cout << "Go Bigger" << endl << endl;
				iChance--;
			}
			else
			{
			cout << "You Lose! The number was " << endl;
			cout << iNumber << endl;
			break;
			}
		}
	}
	system("pause");
    return 0;
}

