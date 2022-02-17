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

int lastDigit(int number) {
	return abs(number) % 10;
}

vector<int> getDigits(int number) {

	vector<int> digits;

	while (number > 0)
	{
		int digit = number % 10;
		number /= 10;
		digits.push_back(digit);
	}
	return digits;
}

void printDigits(vector<int> digits) {
	for (int digit : digits) {
		cout << digit << " ";
	}
	cout << endl;
}

void printDigitsReversed(vector<int> digits) {
	for (int i = size(digits) - 1; i >= 0; i--)
	{
		cout << digits[i] << " ";
	}
	cout << endl;
}

int main() {
	int number = getInput("Enter a number: ");

	int last = lastDigit(number);
	cout << "Last number is " << last << endl;

	vector<int> digits = getDigits(number);
	cout << "Printing digits: " << endl;
	printDigits(digits);
	cout << "Printing reversed: " << endl;
	printDigitsReversed(digits);
}