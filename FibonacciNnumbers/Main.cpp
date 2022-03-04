#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int input;
	cin >> input;
	return input;
}

void printFibonacciNumbers(const int numbers)
{
	int previous = 1;
	int next = 0;

	for (int i = 0; i <= numbers; ++i)
	{
		cout << next << ", " << endl;
		int temp = next;
		next += previous;
		previous = temp;
	}
}

int main()
{
	int number = getInput("Number: ");
	printFibonacciNumbers(number);
}