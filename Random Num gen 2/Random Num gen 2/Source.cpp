#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

	int numberChoice;
	int number;
	int count = 0;
	int again;

	do {
		srand(time(NULL));
		number = rand() % 100 + 1;
		cout << "Enter a number between 1 and 100" << endl;
		cin >> numberChoice;

		while (numberChoice != number && count == 5) {


			if (numberChoice < number)
			{
				cout << "The number is to low" << endl;
			}
			else if (numberChoice > number)
			{
				cout << "Number is to high " << endl;
			}
			else if (numberChoice == number) {
				cout << " You found it!";
			}
			count = count + 1;

		}

		if (count == 5) {
			cout << "You died" << endl;
		}
		else {
			cout << "Noice" << endl;
		}
		cout << "Would you like to play again? 1 for yes 2 for no>>> ";
		cin >> again;
		numberChoice = 0;
		count = 5;
	} while (again != 5);

	system("pause");
	return 0;

}




