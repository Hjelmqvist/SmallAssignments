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

bool hasArithmeticProgression(vector<int> numbers)
{
	if (numbers.size() > 2)
	{
		const int difference = numbers[0] - numbers[1];

		for (int i = 0; i < numbers.size() - 1; ++i)
		{
			if (numbers[i] - numbers[i + 1] != difference)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	vector<int> numbers = { 5, 4, 5, 2, 1 };
	cout << "Numbers has arithmetic progression: " << (hasArithmeticProgression(numbers) ? "true" : "false") << endl;
	return 0;
}