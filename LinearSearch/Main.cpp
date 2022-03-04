#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int input;
	cin >> input;
	return input;
}

int linearSearch(vector<int> numbers, int number)
{
	for (int i = 0; i < numbers.size(); ++i)
	{
		if (numbers[i] == number)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	const vector<int> numbers = { 5, 3, 7, 10, 3, 1, 3 };
	int position = linearSearch(numbers, getInput("Enter number: "));

	if (position >= 0)
		cout << "Number found at position " << position << endl;
	else
		cout << "Number wasn't found at any position." << endl;

	return 0;
}