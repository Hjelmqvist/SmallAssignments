#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> numbers)
{
	int sum = 0;
	for (auto number : numbers)
	{
		sum += number;
	}
	return sum;
}

int lowestValue(vector<int> numbers)
{
	if (numbers.empty())
	{
		return 0;
	}

	int lowest = numbers[0];
	for (auto number : numbers)
	{
		if (lowest > number)
		{
			lowest = number;
		}
	}
	return lowest;
}

int highestValue(vector<int> numbers)
{
	if (numbers.empty())
	{
		return 0;
	}

	int highest = numbers[0];
	for (auto number : numbers)
	{
		if (highest < number)
		{
			highest = number;
		}
	}
	return highest;
}

float average(vector<int> numbers)
{
	int total = sum(numbers);
	int size = numbers.size();
	return (float)total / size;
}

int main()
{
	vector<int> numbers = { 9, 5, 2, 8, 3 };
	cout << "Sum: " << sum(numbers) << endl;
	cout << "Minimum number: " << lowestValue(numbers) << endl;
	cout << "Highest number: " << highestValue(numbers) << endl;
	cout << "Average: " << average(numbers) << endl;

	return 0;
}
