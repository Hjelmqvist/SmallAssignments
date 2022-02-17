#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int number;
	cin >> number;
	return number;
}

bool isOdd(int number) {
	return number % 2 != 0;
}

int main() {
	int number = getInput("Enter a number: ");
	string oddOrEven = isOdd(number) ? "odd" : "even";
	cout << number << " is an " << oddOrEven << " number";
}