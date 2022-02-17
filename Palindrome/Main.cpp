#include <iostream>
#include <string>

using namespace std;

string getInput(string prompt) {
	cout << prompt;
	string input;
	cin >> input;
	return input;
}

bool isPalindrome(string input)
{
	const unsigned int size = input.size();
	const unsigned int middle = size / 2;
	for (unsigned int i = 0; i < middle; ++i)
	{
		if (input[i] != input[size - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string input = getInput("Enter word: ");
	cout << "The word " << input << " is " << (isPalindrome(input) ? "a" : "not a") << " palindrome" << endl;
	return 0;
}