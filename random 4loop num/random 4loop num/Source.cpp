#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main() {

	int number;
	int count = 0;
	int numberChoice;
	
	
	
	for (int i = 0; i < 10; i++)
	{
		srand(time(NULL));
		number = rand() % 100 + 1;
		int random_i;
		random_i = rand() % 100;
		cout << "\n" << random_i;
	}
	

	system("pause");
	return 0;
}

