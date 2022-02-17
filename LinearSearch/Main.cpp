#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int number;
	cin >> number;
	return number;
}

vector<int> linearSearch(vector<int> numbers, int number)
{
	vector<int> foundPositions;
	for (int i = 0; i < numbers.size(); ++i)
	{
		if (numbers[i] == number)
		{
			foundPositions.push_back(i);
		}
	}
	return foundPositions;
}

int main()
{
	const vector<int> numbers = { 5, 3, 7, 10, 3, 1, 3 };
	const vector<int> positions = linearSearch(numbers, getInput("Enter number: "));

	if (positions.empty() == false)
	{
		cout << "Number found at positions: ";
		for (const int pos : positions)
		{
			cout << pos << ", ";
		}
		cout << endl;
	}
	else
	{
		cout << "Number wasn't found at any position." << endl;
	}

	return 0;
}