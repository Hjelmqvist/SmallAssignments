#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int number;
	cin >> number;
	return number;
}

bool isLuckyNumber(int number)
{
	vector<int> numbers;

	while (number > 0)
	{
		int remainder = number % 10;
		if (find(numbers.begin(), numbers.end(), remainder) != numbers.end())
		{
			return false;
		}
		numbers.push_back(remainder);
		number /= 10;
	}
	return true;
}

int main()
{
	int number = getInput("Number: ");
	cout << number << " is " << (isLuckyNumber(number) ? "a" : "not a") << " lucky number" << endl;
}