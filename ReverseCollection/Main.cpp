#include <iostream>
#include <string>

using namespace std;

string getInput(const string& prompt) {
	cout << prompt;
	string input;
	cin >> input;
	return input;
}

void reverseString(string& input)
{
	size_t size = input.size();
	size_t middle = size / 2;
	for (size_t i = 0; i < middle; ++i)
	{
		const char temp = input[i];
		input[i] = input[size - i - 1];
		input[size - i - 1] = temp;
	}
}

int main()
{
	string input = getInput("Enter input: ");
	reverseString(input);
	cout << input << endl;
	return 0;
}