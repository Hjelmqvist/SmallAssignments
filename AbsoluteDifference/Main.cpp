#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
	cout << prompt;
	int input;
	cin >> input;
	return input;
}

int abs(int a, int b) {
	int result = a - b;
	return result >= 0 ? result : -result;
}

int main() {

	int a = getInput("Enter first number: ");
	int b = getInput("Enter second number: ");
	cout << "The absolute difference is " << abs(a, b) << endl;

	return 0;
}