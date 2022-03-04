#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int input;
	cin >> input;
	return input;
}

bool numberContainsDigit(int number, int digit)
{
	while (number > 0)
	{
		int remainder = number % 10;
		if (remainder == digit)
		{
			return true;
		}
		number /= 10;
	}
	return false;
}

int main()
{
	int number = 341;
	int digit = getInput("Enter digit: ");
	cout << number << (numberContainsDigit(number, digit) ? " contains" : " does not contain") << " the number " << digit << endl;
}