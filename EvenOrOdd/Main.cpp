#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int input;
	cin >> input;
	return input;
}

bool isOdd(int number) {
	return number & 1;
}

int main() {
	int number = getInput("Enter a number: ");
	cout << number << " is an " << (isOdd(number) ? "odd" : "even") << " number";
}