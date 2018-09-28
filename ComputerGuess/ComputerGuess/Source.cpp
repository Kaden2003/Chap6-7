#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

	int mynum;
	int tries = 0;
	int max = 100;
	int min = 1;
	int compnum;

	cout << "Enter a number between 1 and 100: ";
	cin >> mynum;

	do
	{
		compnum = rand() % (max + min) + min;
		cout << "Computers guess is:" << compnum << endl;

		++tries;

		if (mynum > compnum)
		{
			cout << "TO LOW TRY AGAIN!  ";
			min = compnum + 1;
		}
		else if (mynum < compnum)
		{
			cout << "TO HIGH TRY AGAIN  ";
			max = compnum - 1;
		}
		else if (mynum == compnum)
		{
			cout << "BAM YOU GOT IT RIGHT      You got it right in: " << tries << endl;
		}

	} while (mynum != compnum);

	system("pause");
	return 0;
}