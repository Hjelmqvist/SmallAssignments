#include <iostream>
#include <string>

using namespace std;

string getInput(const string& prompt) {
	cout << prompt;
	string input;
	cin >> input;
	return input;
}

template<typename T, size_t S>
void swap(T(&items)[S])
{
	
}

void reverseString(string& input)
{
	const unsigned int size = input.size();
	const unsigned int middle = size / 2;
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